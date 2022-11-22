#include<stdio.h>
#include<stdlib.h>
#define NUM 50
int main()
{
    int i=0;
    #if NUM>50
        i++;
    #endif
    #if NUM==50
        i+=50;
    #endif
    #if NUM<50
        i--;
    #endif
    printf("目前i的值是：%d\n",i);
    system("pause");
    return 0;
}