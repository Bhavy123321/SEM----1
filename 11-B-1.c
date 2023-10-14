//Print the Fibonacci Series.
#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("0\n1\n");
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
