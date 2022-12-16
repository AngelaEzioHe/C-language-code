#include<stdio.h>
int main()
{
	int num[3][2] = {
					{4,5},
					{6,7},
					{8,9}
					};
	for (int i = 0; i < 3; i++)
	{
		printf("%p\n", &num[i][1]);
	}
	return 0;
}