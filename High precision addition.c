#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int a[1015],b[1015];//将高精度数每一位分离出来
void StoringNum(char s1[],char s2[]);//将字符型的数字对应acsaii码的转化为对应的数字
void addition(int a[],int b[]);//进行加法运算
void print();//除去先导零，输出结果

int main()
{
    char s1[1010],s2[1010];
    scanf("%s %s",s1,s2);
    StoringNum(s1,s2);
    addition(a,b);
    print();
    system("pause");
    return 0;
}

void StoringNum(char s1[],char s2[])
{
    a[0]=strlen(s1);
    b[0]=strlen(s2);
    for(int i=a[0] , j=0 ; i>=1 ; i--,j++)
    {
        a[i]=s1[j]-'0';
    }
    for(int i=b[0] , j=0 ; i>=1 ; i--,j++)
    {
        b[i]=s2[j]-'0';
    }
}

void addition(int a[],int b[])
{
    int len=a[0]>b[0] ? a[0]+1 : b[0]+1;//储存运算结果的最大位数
    int flag = 0;
    int temp = 0;
    for(int i=1;i<=len;i++)
    {
            temp = a[i] + b[i] + flag;//对本位进行加法
            a[i] = temp % 10;//对相加结果取余
            flag = temp / 10;//计算进位
    }
    a[0]=len;
    return ;
}

void print()
{
    int len = a[0];
    while(a[len] == 0)//除去先导0
    {
        len--;
    }
    while(len>0)
    {
        printf("%d",a[len--]);
    }
}