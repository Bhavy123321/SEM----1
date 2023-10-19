//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
void main()
{
	int n,a[n],i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}
