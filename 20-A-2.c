//Create a structure book with book title, author, publication, and price. 
//Read data of 3 books and display. 
#include<stdio.h>
#include<string.h>
struct book{
	char tit[50];
	char aut[100];
	char publication[100];
	int mrp;
};
void main()
{
	struct book a[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter book title-%d:",i+1);
		gets(a[i].tit);
		printf("enter book\'s authour-%d:",i+1);
		gets(a[i].aut);
		printf("enter book\'s publicaton-%d:",i+1);
		gets(a[i].publication);
		
	}
	for(i=0;i<3;i++)
	{
		printf("enter book price-%d:",i+1);
		scanf("%d",&a[i].mrp);
	}
	for(i=0;i<3;i++)
	{
		printf(" book title-%d:%s\n",i+1,a[i].tit);
		printf(" book\'s authour-%d:%s\n",i+1,a[i].aut);
		printf(" book\'s publicaton-%d:%s\n",i+1,a[i].publication);
		printf(" book\'s mrp-%d:%d\n",i+1,a[i].mrp);
	}
}
