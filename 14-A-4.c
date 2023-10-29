//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main()
{
	int n,i,j,max,min,a[n];
	float avg,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max++;
		}
		if(min>a[i])
		{
			min++;
		}
	}
	avg=sum/n;
	printf("max=%d\n min=%d\n sum=%f\n avg=%f",max,min,sum,avg);
}
