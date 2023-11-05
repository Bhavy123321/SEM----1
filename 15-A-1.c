//Copy all elements of one array to another.
#include<stdio.h>
void main()
{
	int n;
	printf("enter a element: ");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++)
	{
		printf("\na[%d]: ",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
