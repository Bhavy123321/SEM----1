//Find out largest number from given three numbers.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a b c :" );
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest no");
		}
		else
		{
			printf("c is largest no");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is largest no");	
		}	
		else
		{
			printf("c is largest no");
		}
	}
}
