//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void maxmin(int,int);
void main()
{
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	maxmin(a,b);
}
void maxmin(int a,int b)
{
	if(a>b)
	{
		printf("max=%d\nmin=%d",a,b);
	}
	else
	{
		printf("max=%d\nmin=%d",b,a);
	}
}
