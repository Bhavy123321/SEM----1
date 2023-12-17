//Scan a character string passed as an argument and 
//convert all lowercase string to uppercase string
#include<stdio.h>
#include<string.h>
void str(char *a,int p)
{
	int i;
	for(i=0;i<p;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
		printf("%c",a[i]);
	}
}
void main()
{
	char a[100];
	printf("enter sring:");
	gets(a);
	int p=strlen(a);
	str(a,p);
	
}
