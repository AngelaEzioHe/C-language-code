#include<stdio.h>
int main()
{
	int a[5],b[5];
	int *p,*q;
	p=&a[0];
	q=b;
	printf("��������a��");
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("��������b��");
	for(int j=0;j<5;j++)
		scanf("%d",&b[j]);
	printf("a����Ϊ��");
	for(int i=0;i<5;i++)
		printf("%d ",*p++);
	printf("\n");
	printf("b����Ϊ��");
	for(int j=0;j<5;j++)
		printf("%d ",*q++);
	return 0;
}
