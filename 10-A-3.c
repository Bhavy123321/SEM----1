//Find whether the given number is prime or not.(whlie loop)
#include<stdio.h>
void main()
{
	int n,i=2,count=0;
	printf("Enter any integer : ");
	scanf("%d",&n);
	while(i<n)
	{
		if(i%n==0)
		{
			count++;
		}i++;
	}
	count>0?printf("its prime number"):printf("its not prime number");
}
