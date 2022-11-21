#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned result;
    int a;
    scanf("%d",&a);
    result = ~a;
    printf("%o",result);
    system("pause");
    return 0;
}