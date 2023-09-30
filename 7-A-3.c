//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter operation");
	scanf("%c",&ch);
	printf("Enter the value of a and b");
	scanf("%d %d",&a,&b);
	scanf("/n");
	switch(ch)
	{
		case '+':printf("Addition=%d",a+b);
		break;
		case '-':printf("subtraction=%d",a-b);
		break;
		case '*':printf("multiplication=%d",a*b);
		break;
		case '/':printf("divsion=%d",a/b);
		break;
		default:printf("invalied opperater");
		break;
	}
	
}
