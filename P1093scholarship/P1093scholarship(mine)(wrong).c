// 把学生的信息归为一组数：

// 123·088·993

// 第一串为总分，第二串为语文分数，第三串为1000减去学号的值

// 最后降序排序
#include<stdio.h>
#include<stdlib.h>
void swap(int a,int b);
int main()
{
    int n;
    scanf("%d",&n);
    struct Grade
    {
        int number;
        int x,y,z;
        int sum;
    }student[n+5];
    for(int i=1;i<=n;i++)
    {
        student[i].number=i;
        scanf("%d",&student[i].x);
        scanf("%d",&student[i].y);
        scanf("%d",&student[i].z);
        student[i].sum=student[i].x+student[i].y+student[i].z;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(student[j].sum <= student[j+1].sum)
            {
                swap(student[j].sum,student[j+1].sum);
                swap(student[j].number,student[j+1].number);
                swap(student[j].x,student[j+1].x);
            }
        }
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=n-i;j++)
        {
            if(student[j].sum == student[j+1].sum)
            {
                if(student[j].x <= student[j+1].x)
                {
                    swap(student[j].sum,student[j+1].sum);
                    swap(student[j].number,student[j+1].number);
                    swap(student[j].x,student[j+1].x);                    
                }
            }
        }
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=n-i;j++)
        {
            if(student[j].sum == student[j+1].sum)
            {
                if(student[j].x == student[j+1].x)
                {
                    if(student[j].number > student[j+1].number)
                    {
                        swap(student[j].sum,student[j+1].sum);
                        swap(student[j].number,student[j+1].number);
                        swap(student[j].x,student[j+1].x);                      
                    }
                }
            }
        }
//总分按高低排好序
    for(int i=1;i<=5;i++)
    {
        printf("%d %d\n",student[i].number,student[i].sum);
    }
    system("pause");
    return 0;
}

void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}