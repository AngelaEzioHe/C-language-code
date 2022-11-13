#include<stdio.h>
#include<string.h>
int main()
{
	int L,R;
	int num=0;
	char a[6];
	scanf("%d%d",&L,&R);
	for(int i=L;i<=R;i++)
	{
		for(int j=i;j>0;j/=10)
		{
			if(j % 10 == 2)
			num++;
		}
	}
	printf("%d",num);
}
