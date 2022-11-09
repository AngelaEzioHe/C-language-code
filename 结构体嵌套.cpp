#include<stdio.h>//title author price date publisher
struct Date
{
	int year;
	int month;
	int day;
}; 
struct BOOK
{
	char title[100];
	char author[30];
	float price;
	struct Date date;
	char publisher[100];
}book = {"《马老师和辩论的爱情故事》","何宇飞",99,{2022,11,9},"核弹工作室"};

int main()
{

	
	printf("书名：%s\n",book.title);
	printf("作者：%s\n",book.author);
	printf("售价：%f\n",book.price);
	printf("出版日期：%u-%u-%u\n",book.date.year,book.date.month,book.date.day);
	printf("出版社：%s\n",book.publisher);
	return 0;
}
