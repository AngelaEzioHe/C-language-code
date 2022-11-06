#include<stdio.h>//用指针交换两个变量的值 
void swap(int *pa,int *pb);
int main()
{
	int a,b;
	printf("输入两个数a和b，实现交换");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int *pa,int *pb)//可以同时返回多个变量 
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
}
