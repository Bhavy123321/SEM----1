// Read a matrix and print diagonal elements and its sum. 
#include<stdio.h>
void main()
{
	int i,j,m,n,arr[m][n],x,sum=0;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter an element[%d][%d]: ",m,n);
			scanf("%d",&arr[m][n]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d",arr[i][j]);
			}
		}
	}
}
