#include<stdio.h>
#include<stdlib.h>
enum Colors{Red=1,Blue,Green};
int main()
{
    int icolor;
    printf("1代表红色，2代表蓝色，3代表绿色。\n");
    printf("输入选择的数字：");
    scanf("%d",&icolor);
    switch(icolor)
    {
        case Red:
            printf("选择红色\n");
            break;
        case Blue:
            printf("选择蓝色\n");
            break;
        case Green:
            printf("选择绿色\n");
            break;
        default:
            printf("???\n");
            break;
    }
    system("pause"); 
    return 0;
}