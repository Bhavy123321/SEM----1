/*
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<stdio.h>
void main()
{
	int i,j,k,n=5;
	for(i=0;i<=n;i++)
	{
		for(k=i;k>=0;k--)
			{
				printf(" ");
			}
		for(j=5;j>=i;j--)
		{
			
			printf("* ");
		}
		
		printf("\n");
	}
}
