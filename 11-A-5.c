//Find factorial of the given number.
#include<stdio.h>
void main()
{
	int i,n,ans=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		ans=ans+n;
	}
	printf("%d",ans);
}
