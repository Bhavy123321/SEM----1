//Print day name of week using switch.
#include<stdio.h>
void main()
{
	int x;
	printf("Enter integer :" );
	scanf("%d",&x);
	switch(x)
	{
		case 1:printf("sunday");
		break;
		case 2:printf("monday");
		break;
		case 3:printf("tuesdaY");
		break;
		case 4:printf("wednesday");
		break;
		case 5:printf("thursday");
		break;
		case 6:printf("friday");
		break;
		case 7:printf("saturday");
		break;
		default:printf("plz Enter valid number");
		break;
	}
}
