/*
    *
   * *
  * * *
 * * * *
* * * * *

*/
#include<stdio.h>
void main()
{
	int i,j,k,n=5;
	for(i=0;i<=n;i++)
	{
		for(k=5;k>i;k--)
			{
				printf(" ");
			}
		for(j=0;j<=i;j++)
		{
			
			printf("* ");
		}
		
		printf("\n");
	}
}
