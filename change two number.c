#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=9;
    int y=4;
    // x=x^y;
    // y=y^x;
    // x=x^y;
    x^=y^=x^=y;
    printf("%d %d",x,y);
    system("pause");
    return 0;
}