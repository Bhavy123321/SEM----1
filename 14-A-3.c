//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main()
{
	int n,i,e=0,o=0,arr[n];
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		printf("Entered number is even=%d\n",e);
	    printf("Entered number is odd=%d",o);
	}
}
