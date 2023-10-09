//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main()
{
	int i=1,sum=0,n,var;
	float avg;
	printf("Enter number of values : ");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&var);
		sum=sum+var;
		i=i+1;
	}
	avg=sum/n;
	printf("sum=%d & avg=%f",sum,avg);
}
