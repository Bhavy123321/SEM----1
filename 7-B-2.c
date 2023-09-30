//Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
void main()
{
	char b;
	scanf("%c",&b);
	(b>='a'&&b<='z'||b>='A'&&b<='Z')?printf("b is alphabrt"):printf("b is not alphabet");
	
}
