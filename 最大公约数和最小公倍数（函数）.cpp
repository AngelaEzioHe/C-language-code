#include<stdio.h>
void fuction(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	fuction(a,b);
	return 0;
}
void fuction(int a,int b)
{
	int i,c;
	if(a>=b)//ʹa<b 
	{
		c=a;
		a=b;
		b=c;
	}
	for(i=a;i>=1;i--)
	{
		if((a % i == 0) && (b % i == 0))
		break;
	}
	printf("���Լ��Ϊ��%d\n",i);
	for(i=b; ;i++)
	{
		if((i % a == 0)&&(i % b == 0))
		break;
	}
	printf("��С������Ϊ��%d\n",i);
}
