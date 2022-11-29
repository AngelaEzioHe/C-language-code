//题目描述
//质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
//邓老师非常喜欢质数，现在他给出一个定义f(x),表示严格大于x的最小质数，例如,f(1)=2,f(2)=3,f(3)=f(4)=5
//并且[x]表示不大于x的最大整数。
//现在邓老师想考考你，总共给出m次询问，每次询问给出一个正整数x。
//如果g(x)为质数，输出”YES”，如果g(x)不是质数，输出”NO”。
//g(x) = [f(x) + f(f(x))/2]
//输入格式
//第一行输入给出一个整数m，表示总询问次数；
//接下来 行，每行单独给出一个正整数x(1<=x<=10^18)。
//输出格式
//共m行，如果g(x)是质数，输出“YES“，如果g(x)不是质数，输出”NO”。(不带双引号)

#include<stdio.h>
long long fx(long long x)//求大于x的最小素数 
{
	int i;
	for(i=x+1; ;i++)
	{
		//判断i是否为素数
		int k=0;
		for(int j=1;j<=i;j++)
		{
			if(i % j == 0)
			{
				k++;
			}
		}
		if(k == 2)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int m;
	scanf("%d",&m);
	long long x[m+10];
	for(int i=1;i<=m;i++)
	{
		scanf("%ld",&x[i]);
	}
	long long gx[m+10];
	for(int i=1;i<=m;i++)
	{
		gx[i] = fx((x[i])) + fx(fx(x[i])) / 2;
	
	}
	for(int i=1;i<=m;i++)
	{
		int k=0;
		for(int j=1;j<=gx[i];j++)
		{
			if(gx[i] % j == 0)
			{
				k++;
			}
		}
		if(k == 2)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
 
