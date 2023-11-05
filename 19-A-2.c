// Pass an array in function to print array elements
#include<stdio.h>
void array(int *a,int size)
{
	int i=0;
	for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
	}
	
}
void main()
{
	
	int a[9]={1,2,3,4,5,6,7,8,9};
    array(a,9);
}
