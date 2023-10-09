//Check whether the given number is palindrome or not.
#include<stdio.h>
void main()
{
	int n,sum=0,rem,a;
	printf("Enter any integer : ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==a)
	{
		printf("its palindrome number");
	}
	else
	{
		printf("its not palindrome number");
	}
}
