//Count simple interest using function.
#include<stdio.h>
void simint(float,float,float);
void main()
{
	float x,y,z;
	printf("Enter float value of x,y and z: ");
	scanf("%f %f %f",&x,&y,&z);
	simint(x,y,z);
}
void simint(float x,float y,float z)
{
	printf("simple interset=%f",(x*y*z)/100);
}
