#include<stdio.h>
#include<math.h>
void fun(int num);
double AVG();
int main()
{
	printf("判断是否为素数，输入9999退出\n");
	while (1)
	{
		int a;
		printf("输入一个数：");
		scanf_s("%d", &a);
		if (a == 9999)
			break;
		fun(a);
	}
	AVG();
	printf("%lf",AVG());
	return 0;
}
void fun(int num)
{
	int k = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			k++;
	}
	if (k == 2)
		printf("这是素数\n");
	else
		printf("这不是素数\n");
}
double AVG()
{
	
	double sum = 0;
	for (int i = 3; i <= 1000; i++)
	{
		int k = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				k++;
		}
		if (k == 2)
		{
			sum += sqrt(i);
		}
	}
	return sum;
}