//Use string handling functions strlen(), strcmp(),
//strcpy(), strcat(), strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	printf("enter string:");
	gets(s);
	printf("lenght of sting:%d ",strlen(s));//string length
	printf("\nenter another string:");
	char t[100];
	gets(t);
	printf("\nstring 1 in upper case:%s",strupr(s));//string in upper case
	printf("\nstring 2 in lower case:%s",strupr(t));//string in lower case
	printf("\nstring 1 in reverse:%s\n",strrev(s));//string in reverse
	int n;
	n=strcmp(s,t);//string compare
	if(n==0)
	{
	 printf("both string are same.");
	}
	else
	{
		printf("both string are different.");
	}
	printf("enter 1 for string copy else string concatinate: ");
	scanf("%d",&n);
	if(n==1)
	printf("%s",strcpy(s,t));//string copy
	else
	printf("%s",strcat(s,t));//string concatinate
}
