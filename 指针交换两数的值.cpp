#include<stdio.h>//��ָ�뽻������������ֵ 
void swap(int *pa,int *pb);
int main()
{
	int a,b;
	printf("����������a��b��ʵ�ֽ���");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int *pa,int *pb)//����ͬʱ���ض������ 
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
}
