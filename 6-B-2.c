//Determine the roots of the equation ax^2+bx+c=0.
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,R1,R2;
	printf("enter the value of a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b>4*a*c)
	{
		R1=(-b+sqrt(b*b-4*a*c))/2*a;
		R2=(-b-sqrt(b*b-4*a*c))/2*a;
		printf("R1 and R2=%f,%f",R1,R2);
	}
	else
	{
		printf("real roots are not possible");
	}
}
