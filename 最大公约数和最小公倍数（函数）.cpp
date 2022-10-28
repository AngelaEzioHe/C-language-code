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
	if(a>=b)//使a<b 
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
	printf("最大公约数为：%d\n",i);
	for(i=b; ;i++)
	{
		if((i % a == 0)&&(i % b == 0))
		break;
	}
	printf("最小公倍数为：%d\n",i);
}
