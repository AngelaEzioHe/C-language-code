#include<stdio.h>
//#include<stdlib.h>
//int* a = (int*)malloc(sizeof(int) * N);
int main()
{
	int TEN;
	scanf_s("%d", &TEN);
	int TWO[32];
	int i = 1;
	while ((TEN / 2) != 0)
	{
		TWO[i] = TEN % 2;
		TEN /= 2;
		i++;
	}
	TWO[i] = TEN % 2;
	for (int j = i; j > 0; j--)
	{
		printf("%d", TWO[j]);
	}
	return 0;
}