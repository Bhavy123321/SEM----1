/*
    1
   A B
  1 2 3
 C D E F
1 2 3 4 5

*/
#include<stdio.h>
void main()
{
	int i,j,k,x=65;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			printf(" ");
			
		}
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%d ",j);	
			}
			else
			{
				
				printf("%c ",x);
				x++;
			}
		}
		printf("\n");
	}
}
