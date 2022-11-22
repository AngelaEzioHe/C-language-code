#include<stdio.h>
#include<stdlib.h>
#define STR "100号"
int main()
{
    #ifdef STR
        printf(STR);
        printf("能办理业务\n");
    #endif
    printf("\n");
    #ifndef ABC
        printf("没取到号不能办理业务\n");
    #endif
    system("pause");
    return 0;
}