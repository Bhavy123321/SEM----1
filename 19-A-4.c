//Find a character from given string
#include<stdio.h>
int str(char *,char );
void main()
{
	char a[100],z;
	printf("enter string: ");
	gets(a);
	printf("enter charater you want to search:");
	scanf("%c",&z);
	str(a,z);
}
int str(char *a,char z){
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==z)
		{printf("entered ch. is at position:%d",i+1);
		return 0; }
	}
	printf("entered character is not  in sring.");
}
