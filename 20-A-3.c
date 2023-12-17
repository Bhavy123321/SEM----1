//Demonstrate difference between structure and union.
#include<stdio.h>
#include<string.h>

struct a{
	double x;
	int y;
};
union b{
	int p;
	double q;
};
void main()
{
	struct a hi;
	hi.x=4;
	hi.y=452;
	union b hello;
	hello.p=478;
	hello.q=452.256;
	printf("%d\n",&hi.x);//in structure all variables dont share same location
	printf("%d\n",&hi.y);
	printf("%d\n",&hello.p);//in union all variables shares same location
	printf("%d\n",&hello.q);
	
	printf("%d\n",sizeof(hi));//in structure storage will be given as multiple
							  // of maximum bit requiring datatype
							  
	printf("%d",sizeof(hello));//in union storage of all variables will be 
}							   //storage req. for maximum bit taking datatype
