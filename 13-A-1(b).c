/*
12345
1234
123
12
1 
*/
#include<stdio.h>
void main()
{
	int i,j,n=5,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
