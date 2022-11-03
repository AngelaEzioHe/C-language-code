#include<stdio.h>
#include<string.h>
int main ()
{
	char a[20];
	scanf("%s",&a);
	if(strlen(a) == 5)
	{
		if(a[0] == a[4] && a[1] == a[3])
		printf("是回文数");
	}
	else
	printf("Error!");
	return 0;
}
