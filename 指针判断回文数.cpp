#include<stdio.h>
#include<string.h>
int main()
{
	char letter[100];
	scanf("%s",letter);
	int length=strlen(letter);
	char *p=&letter[0];
	char *q=&letter[length-1];
	int i;
	for(i=0;i<length;i++)
	{
		if(*p != *q)
		{
			printf("false");
			break;
		}
		else
		{
			p++;
			q--;
		}	
	}
	if(i == length)
		printf("true");
	return 0;
}
