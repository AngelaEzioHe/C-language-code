#include<stdio.h> 
int main()
{
	char a;
	scanf("%c",&a);
	if(a >= 'a' && a <= 'z')
	printf("%c",(a-32));
	else
	printf("%c is not a lower case letter",a);
	return 0;
}
