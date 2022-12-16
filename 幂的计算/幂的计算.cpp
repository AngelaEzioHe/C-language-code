#include<stdio.h>
long long power(int x, int y);
int main()
{
	int x, y;
	printf(" ‰»Îx∫Õy£∫\n");
	scanf_s("%d%d", &x, &y);
	printf("%ld", power(x, y));
	return 0;
}
long long power(int x, int y)
{
	long long result=1;
	for (int i = 1; i <= y; i++)
	{
		result *= x;
	}
	return result;
}