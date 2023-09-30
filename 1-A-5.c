//Calculate simple interest (principal*roi*time period)/100
#include<stdio.h>
void main()
{
	float p,r,n,I;
	printf("Enter the value of p");
	scanf("%f",&p);
	printf("Enter the value of r");
	scanf("%f",&r);
	printf("enter the value of n");
	scanf("%f",&n);
	I=(p*r*n)/100;
	printf("simple interest:%f",I);
}
