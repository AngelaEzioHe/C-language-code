#include<stdio.h>
#include<math.h>
void fun(int num);
double AVG();
int main()
{
	printf("�ж��Ƿ�Ϊ����������9999�˳�\n");
	while (1)
	{
		int a;
		printf("����һ������");
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
		printf("��������\n");
	else
		printf("�ⲻ������\n");
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