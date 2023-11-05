//Count number of elements divisible by 3 in array.
#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter a element: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			count++;
		}
		else
		{
		}
	}
	printf("%d",count);
}
