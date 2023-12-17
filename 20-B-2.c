// Demonstrate nested structure. 
#include<stdio.h>
struct height{
	int inch;
	int cm;
};
struct profile{
	char name[100];
	int age;
	struct height h;
};
void main()
{
	struct profile a[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter name-%d:",i+1);
		scanf("%s",&a[i].name);
		printf("enter age:");
		scanf("%d",&a[i].age);
		printf("enter height(in inch):");
		scanf("%d",&a[i].h.inch);
		printf("enter height(in cm):");
		scanf("%d",&a[i].h.cm);
	}
}
