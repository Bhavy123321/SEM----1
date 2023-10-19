//Estimate the value of the mathematical constant e.
#include<stdio.h>
void main()
{
	float n,i=1,j,sum=1,mul=1;
	printf("Enter the value of n: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			mul=mul*j;
		}
		sum=sum+(1/mul);
	}
	printf("%f",sum);
}
