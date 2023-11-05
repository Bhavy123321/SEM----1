//Count total number of negative elements in array.
#include<stdio.h>
void main()
{
	int n,i,neg;
    printf("enter a element: " );
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			neg++;
		}
	}
	printf("%d",neg);
}
