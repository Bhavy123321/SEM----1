//Read 3 numbers, multiply largest number from first two numbers to third one using switch.
#include<stdio.h>
int main()
{
 	int a,b,c,temp;
 	printf("Enter the value of a b c");
 	scanf("%d %d %d",&a,&b,&c);
 	temp=a>b?1:0;
 	switch(temp)
 	{
 		case 0:printf("%d",b*c);
 		break;
 		case 1:printf("%d",a*c);
 		break;
	 }
}
