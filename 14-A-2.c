//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main()
{
		int n,a[n],i,p=0,q=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			p++;
		}
		else
		{
			q++;
		}
	}
	printf("total number of pos. array %d\n",p);
	printf("total number of neg. array %d",q);
}
