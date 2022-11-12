#include<stdio.h>
int main()
{
	int a[5],b[5];
	int *p,*q;
	p=&a[0];
	q=b;
	printf("输入数组a：");
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("输入数组b：");
	for(int j=0;j<5;j++)
		scanf("%d",&b[j]);
	printf("a数组为：");
	for(int i=0;i<5;i++)
		printf("%d ",*p++);
	printf("\n");
	printf("b数组为：");
	for(int j=0;j<5;j++)
		printf("%d ",*q++);
	return 0;
}
