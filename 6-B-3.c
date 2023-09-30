/*Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles, equilateral, scalene or right angled triangle. 
WAP=WRITE A PROGRAMME*/
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter sides of triangle as A,B,C ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b||b==c||c==a)
	{
		 if(a==b&&b==c&&c==a)
	{
		printf("\n its equilateral triangle");
	}
	else
	{
		printf("\n its isosceles triangle");
	}
		if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
		{
			printf("\n its rightangled triangle");
		}
	}
	else if (a!=b&&b!=c&&c!=a)
	{
		if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
		{
			printf("\n its rightangled triangle");
		}
		printf("\n its scalene triangle");
	}
}
