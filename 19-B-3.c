//Swap elements of two integer arrays using user define function.
#include<stdio.h>
void exc(int *a,int n1,int *b,int n2)
{
	char c[100];
	int i;
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	printf("string-1 now:\n");
	 for(i=0;i<n2;i++)
	{
		a[i]=b[i];
		printf("%d ",a[i]);
	}
	printf("\nstring-2 now:\n");
	for(i=0;i<n1;i++)
	{
		b[i]=c[i];
		printf("%d ",b[i]);
	}
	
}
void main()
{
	int i,n1,n2;
	printf("enter array-1 size:");
	scanf("%d",&n1);
	int a[100];
	printf("enter array-1 elements.");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("enter array-2 size:");
	scanf("%d",&n2);
	int b[100];
	printf("enter array-2 elements.");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	exc(a,n1,b,n2);
}
