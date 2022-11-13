#include<stdio.h>
struct Student
{
	char name[10];
	int Old;
	int Grade;
}student[5];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",student[i].name);
		scanf("%d",&student[i].Old);
		scanf("%d",&student[i].Grade);
	}
	for(i=0;i<n;i++)
	{
		student[i].Old++;
	}
//	printf("%d\n",student[1].Grade);
	for(i=0;i<n;i++)
	{
		if(student[i].Grade*1.2 > 600)
		{			
			student[i].Grade=600;
		}
		else
		{
			student[i].Grade*=1.2;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",student[i].name);
		printf("%d ",student[i].Old);
		printf("%d\n",student[i].Grade);
	}
//	printf("%d",student[1].Grade);
}
