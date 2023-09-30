//Swap two numbers. (without using temporary variable)
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);//A=5,B=4
	a=a+b;//A=9
	b=a-b;//B=5
	a=a-b;//A=4
	printf("values of a=%d,b=%d",a,b);
}
