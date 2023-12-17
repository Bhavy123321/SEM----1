// Create structure student with name, percentage and age.
//Read data of 5 students using array of structure.  
#include<stdio.h>
struct stud{
	char nm[100];
	int per;
	int age;
};
void main()
{
	struct  stud x[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name of student-%d:\n",i+1);
		scanf("%s",x[i].nm);
		printf("enter percentage:");
		scanf("%d",&x[i].per);
		printf("enter age:");
		scanf("%d",&x[i].age);
	}
}

