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
}book = {"������ʦ�ͱ��۵İ�����¡�","�����",99,{2022,11,9},"�˵�������"};

int main()
{

	
	printf("������%s\n",book.title);
	printf("���ߣ�%s\n",book.author);
	printf("�ۼۣ�%f\n",book.price);
	printf("�������ڣ�%u-%u-%u\n",book.date.year,book.date.month,book.date.day);
	printf("�����磺%s\n",book.publisher);
	return 0;
}
