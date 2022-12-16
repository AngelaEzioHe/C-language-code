#include<stdio.h>
int ifprime(int num);
int main()
{
	int num;
	while (true)
	{
		printf("输入一个数，判断是否为素数：\n");
		scanf_s("%d", &num);
		printf("%d\n", ifprime(num));
	}
	
	return 0;
}
int ifprime(int num)
{
	if (num < 2)
		return -1;
	int k = 0;
	for (int i = 1; i <= num; i++)
	{
		
		if (num % i == 0)
		{
			k++;
		}
	}
	if (k == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}