#include<stdio.h>//title author price date publisher
struct BOOK
{
	char title[100];
	char author[30];
	float price;
	unsigned int date;
	char publisher[100];
}book;

int main()
{
	printf("����������");
	scanf("%s",book.title);
	printf("�������ߣ�");
	scanf("%s",book.author);
	printf("����۸�");
	scanf("%f",&book.price);
	printf("����������ڣ�");
	scanf("%d",&book.date);
	printf("��������磺");
	scanf("%s",book.publisher);
	
	printf("\n=====����¼�����=====\n");
	
	printf("������%s\n",book.title);
	printf("���ߣ�%s\n",book.author);
	printf("�ۼۣ�%f\n",book.price);
	printf("�������ڣ�%d\n",book.date);
	printf("�����磺%s\n",book.publisher);
	return 0;
}
