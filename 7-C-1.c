//Check for equality of two numbers without using arithmetic or comparison operator.
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d %d",&a,&b);
	a&&b?printf("both integers are equal"):printf("both integers are not equal");
}
