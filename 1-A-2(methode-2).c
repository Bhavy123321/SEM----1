//Calculate average of three numbers using scanf
#include<stdio.h>
void main()
{
	int a,b,c;
	float avg;
	printf("Enter the value of a: " );
	scanf("%d",&a);
	printf("Enter the value of b: " );
	scanf("%d",&b);
	printf("Enter the value of c: " );
	scanf("%d",&c);
	avg=(a+b+c)/3.0;
	printf("avg of three no. is:%f",avg);
}
