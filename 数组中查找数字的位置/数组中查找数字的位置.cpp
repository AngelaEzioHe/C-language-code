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
	printf("����֪���ĸ����ֵ�λ�ã�\n");
	int x;
	scanf_s("%d", &x);
	int k = 0;
	for (int i = 1; i <= N; i++)
	{
		if (x == num[i])
		{
			printf("%d�������е�%d����", x,i);
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