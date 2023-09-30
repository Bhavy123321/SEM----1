//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
#include<stdio.h>
void main()
{
	int n=0,N;
	printf("enter a digit");
	scanf("%d",&N);
	do
	{
		printf("\n%d",n);
		n++;
	}
	while(n<=N);
}
