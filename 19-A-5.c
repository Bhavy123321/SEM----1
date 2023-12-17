//Replace a character in given string
#include<stdio.h>
int str(char *,char ,int );
void main()
{
	char a[100],z;
	int n;
	printf("enter string: ");
	gets(a);
	printf("enter charater you want to replace with:");
	scanf("%c",&z);
	printf("enter position at which you want to replace character:");
	scanf("%d",&n);
	str(a,z,n);
}
int str(char *a,char z,int n){
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(i==n-1)
		{
			a[i]=z;
			for(i=0;a[i]!='\0';i++)
			{
				printf("%s",a);
				return 0;
			}
		}
	}
	printf("invalid input.");
	return 0;
}
