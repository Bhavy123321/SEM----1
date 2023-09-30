//Print number of days in a month considering leap year using switch.
#include<stdio.h>
void main()
{
	int n;
	printf("enter month");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("number of days in these months are 31");
		break;
		case 4:
		case 6:
		case 9:
		case 11:printf("number of days in these months are 30");
		break;
		case 2:printf("number of days in these months are 28");
		break;	
		default:printf("invalied input");
	}
}
