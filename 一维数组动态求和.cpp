//输入：nums = [1,2,3,4]
//输出：[1,3,6,10]
//解释：动态和计算过程为 [1, 1+2, 1+2+3, 1+2+3+4] 。
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[N+10];
	int b[N+10];
	b[N+10]=0;
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			b[i]+=a[j];
		}
	}
	for(int i=1;i<=N;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
