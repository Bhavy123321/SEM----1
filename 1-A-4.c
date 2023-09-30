//Find area of triangle. ((height*base)/2)
#include<stdio.h>
int main()
{
	float b,h,A;
	printf("Enter the value of b");
	scanf("%f",&b);
	printf("Enter the value of h");
	scanf("%f",&h);
	A=0.5*b*h;
	printf("area of triangle:%f",A);

}
