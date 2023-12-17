// Demonstrate structure pointer
#include<stdio.h>
struct abc{
	int a;
};
void main()
{
struct abc *p,z;
p=&z;
z.a=45;
printf("%d",p->a);
}
