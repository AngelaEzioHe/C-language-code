#include<stdio.h>
int k = 0;
void max(int array);
int main()
{
	int num[15];
	for (int i = 1; i <= 10; i++)
	{
		scanf_s("%d", &num[i]);
		max(num[i]);
	}
	printf("%d", k);
}
void max(int array)
{
	if (array % 2 == 0)
		k++;
}