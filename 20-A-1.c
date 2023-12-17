//Create, declare and initialize structure employee
#include<stdio.h>
#include<string.h>
struct employee{//cretion of structure
	int salary;
	char name[100];
}s1;//declaration along structure.
void main()
{
	struct employee s2;//declaration after structure.
	strcpy(s1.name,"vivek");//intialization
	strcpy(s2.name,"sujal");
	s1.salary=1500000;
	s2.salary=1500000;
		printf("name=%s",s1.name);
		printf("\nsalary=%d\n",s1.salary);
		printf("name=%s",s2.name);
		printf("\nsalary=%d",s2.salary);
	
}
