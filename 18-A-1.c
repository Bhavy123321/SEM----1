//Add two numbers using function.
#include<stdio.h>
void Add(int,int);
void main()
{
	int x,y;
	printf("Enter the value of x and y: ");
	scanf("%d %d",&x,&y);
	Add(x,y);
}
void Add(int x,int y)
{
	printf("Add=%d",x+y);
}
