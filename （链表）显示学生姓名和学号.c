#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char cName[20];
	int iNumber;
	struct Student* pNext;
};
int iCount;
struct Student* Create()
{
	struct Student* pHead=NULL;
	struct Student* pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("输入名字，学号：\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber != 0)
	{
		iCount++;
		if(iCount == 1)
		{
			pNew->pNext=pHead;
			pEnd=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));
		scanf("%s",&pNew->cName);
		scanf("%s",&pNew->iNumber);
	}
	free(pNew);
	return pHead;
};
void Print(struct Student* pHead)
{
	struct Student *pTemp;
	int ilndex=1;
	printf("----有 %d 个成员：----\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp != NULL)
	{
		printf("NO%d 成员：\n",ilndex);
		printf("姓名：%s\n",pTemp->cName);
		printf("学号：%d\n",pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		ilndex++;
	}
}
int main()
{
	struct Student* pHead;
	pHead=Create();
	Print(pHead);
	return 0;
}                                                                              
