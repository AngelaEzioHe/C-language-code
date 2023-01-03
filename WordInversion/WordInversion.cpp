#include<stdio.h>
#include<string.h>
int main()
{
	char arr[300];
	char arr1[300];
	char arr2[300];
	gets_s(arr);
	int index =0;
	for (int i = 0; i <300; i++)
	{
		if (arr[i] != ' ')
		{
			arr1[i] = arr[i];
		}
		else if (arr[i] == ' ')
		{
			index = i;
		}
	}//arr1[]保存第一个单词
	//printf("%d\n", index);
	for (int i = (index + 1); i < 300; i++)
	{
		if (arr[i] != ' ')
		{
			arr2[i-index-1] = arr[i];
		}
	}
	for (int i = (index-1); i >= 0; i--)
	{
		printf("%c", arr1[i]);
	}
	printf(" ");
	index = strlen(arr2);
	for (int i = index - 1; i >= 0; i--)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}
