//Check whether the given number is perfect or not.
#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("enter no.");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(n==sum)
	{
		printf("perfect no.");
	}
	else
	{
		printf("not perfect no.");
	}
}
