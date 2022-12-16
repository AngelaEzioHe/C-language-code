#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("学生个数：\n");
	int N;
	scanf_s("%d", &N);
	int* a = (int*)malloc(sizeof(int) * (N+10));
	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int temp;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}