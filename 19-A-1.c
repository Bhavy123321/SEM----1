//Find factorial of a number using function and recursive function.
#include<stdio.h>
int factorial(int n);
void main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("factorial=%d",factorial(n));
}
int factorial(int n)
{
	int i,ans=1;
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	return ans;
}
