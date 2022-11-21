#include<stdio.h>
#include<stdlib.h>
int result(unsigned num,int n);
int main()
{
    unsigned num;
    int n;
    printf("输入一个八进制数：\n");
    scanf("%o",&num);
    printf("输入要移动的位数：\n");
    scanf("%d",&n);
    printf("结果为：%o",result(num,n));
    system("pause");
    return 0;
}
int result(unsigned num,int n)
{
    unsigned z,y;
    z=num>>(32-n);
    y=num<<n;
    y=y|z;
    return y;
}