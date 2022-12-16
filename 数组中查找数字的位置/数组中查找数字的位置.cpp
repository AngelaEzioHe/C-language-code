#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	int num[99999] = { 0 };
	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("你想知道哪个数字的位置：\n");
	int x;
	scanf_s("%d", &x);
	int k = 0;
	for (int i = 1; i <= N; i++)
	{
		if (x == num[i])
		{
			printf("%d是数组中第%d个数", x,i);
			break;
		}
		k++;
	}
	if (k == N)
	{
		printf("Not found");
	}
	return 0;
}