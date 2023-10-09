//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main()
{
	char lower='a',upper='A';
    while(lower<='z')
    {
    	printf("%c ",lower);
    	lower++;
	}
	printf("\n");
	while(upper<='Z')
	{
		printf("%c ",upper);
		upper++;
	}
}
