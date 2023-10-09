//Print given number in reverse order.
#include<stdio.h>
void main()
{
	int n,temp=0;
	printf("Enter any integer : ");
	scanf("%d",&n);
	while(n!=0)
	{
	 temp=n%10;
	 printf("%d",temp);
	 n=n/10;
	}
}
