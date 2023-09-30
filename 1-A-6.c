//Convert temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
void main()
{
	float C,F;
	printf("Enter temperature in fahrenheit");
	scanf("%f",&F);
	C=(((F-32)*5)/9);
	printf("temperature in celcius:%f",C);
}
