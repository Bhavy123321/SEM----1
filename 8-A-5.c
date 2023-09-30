//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main()
{
	int n,sumE=0,sumO=0,i=1;
	while(i<=10)
	{
		printf("enter an integer ");
		scanf("%d",&n);
		if(n%2==0)
		{
			sumE=sumE+n;
		}
		else
		{
			sumO=sumO+n;
		}
		i++;
	}
	printf("%d=sum of even integers",sumE);
	printf("%d=sum of odd integers",sumO);
}
