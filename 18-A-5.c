//Swap two numbers using call by value and call by reference.#include<stdio.h>
void swapbyref(int*a,int*b)//swap by reference
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int swapbyval(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("integers after:%d %d",a,b);
	return 0;
}

void main()
{
	int a,b,n;
	printf("enter two integers: ");
	scanf("%d %d",&a,&b);
    printf("enter 1 for executing call by refference else enter 0 for call by value:");
    scanf("%d",&n);
    if(n==1)
    {
    printf("integers before:%d %d\n",a,b);
	swapbyref(&a,&b);
	printf("integers after:%d %d",a,b);
	}
	else if(n==0)
	{
    printf("integers before:%d %d\n",a,b);
	swapbyval(a,b);
	}
	else
	{
		printf("invalid input.");
	}
}
