//Return the maximum of three floating-point numbers. 
#include<stdio.h>
float maxf(float,float,float);
void main()
{
	float x,y,z,ans;
	printf("Enter the float values: ");
	scanf("%f %f %f",&x,&y,&z);
	ans=maxf(x,y,z);
	printf("%f",ans);
}
float maxf(float x,float y,float z)
{
	if(x>y)
	{
		if(x>z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if(y>z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}
