#include<stdio.h>
int main()
{
	int N;
	printf("��������Ʋ���������ǰ�������֣�\n");
	scanf_s("%d", &N);
	int rabbit[99999];
	rabbit[1] = rabbit[2] = 1;
	for (int i = 3; i <= N; i++)
	{
		rabbit[i] = rabbit[i - 1] + rabbit[i - 2];
	}
	for (int i = 1; i <= N; i++)
	{
		printf("%d, ", rabbit[i]);
	}
	return 0;
}