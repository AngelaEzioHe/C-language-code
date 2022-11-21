#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned result;
    int age1,age2;
    scanf("%d",&age1);
    scanf("%d",&age2);
    result = age1 & age2 ;
    printf("%d",result);
    system("pause");
    return 0;
}