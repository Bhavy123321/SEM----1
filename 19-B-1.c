//Find power of any number using recursion
#include<stdio.h>
int power(int b,int n)
{
	if(n==0)
	return 1;
	else
	return b*power(b,n-1);
}
void main()
{
	int b,n;
	printf("enter base no.:");
	scanf("%d",&b);
	printf("enter power (+ve-integer):");
	scanf("%d",&n);
	printf("answer=%d",power(b,n));
}
