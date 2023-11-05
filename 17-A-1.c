// Print value and address of a variable. 
#include<stdio.h>
void main()
{
	int n,*ptr;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	ptr=&n;
	printf("Address of n=%d",ptr);
	printf("value of n=%d",*ptr);
}
