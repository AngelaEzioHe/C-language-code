#include"stdio.h"
#include<string.h>
struct bus
{
    char name[64];
};
struct subway
{
    char name[64];
};
union Transportation
{
    struct bus p;
    struct plane c;
};

int main()
{
    union Transportation t;
    strcpy(t.p.name,"地铁");
    strcpy(t.c.name,"公交车");
    printf("员工选择%s\n",t.p.name);
    printf("员工选择%c\n",t.c.name);
    return 0;
}