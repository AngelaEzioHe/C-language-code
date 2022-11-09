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
	printf("输入书名：");
	scanf("%s",book.title);
	printf("输入作者：");
	scanf("%s",book.author);
	printf("输入价格：");
	scanf("%f",&book.price);
	printf("输入出版日期：");
	scanf("%d",&book.date);
	printf("输入出版社：");
	scanf("%s",book.publisher);
	
	printf("\n=====数据录入完毕=====\n");
	
	printf("书名：%s\n",book.title);
	printf("作者：%s\n",book.author);
	printf("售价：%f\n",book.price);
	printf("出版日期：%d\n",book.date);
	printf("出版社：%s\n",book.publisher);
	return 0;
}
