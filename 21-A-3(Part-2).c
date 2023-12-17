// Demonstrate functions 
//fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind(). 
#include<stdio.h>
void main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("21-A-3.txt","r+");
//	fscanf(fptr,"%c",&ch);//fscanf
//	printf("charater=%c \n",ch);
	printf("charater=%c \n",fgetc(fptr));
	printf("charater=%c \n",fgetc(fptr));
	printf("charater=%c \n",fgetc(fptr));
	printf("charater=%c \n",fgetc(fptr));
	printf("charater=%c \n",fgetc(fptr));
	printf("charater=%c \n",fgetc(fptr));
	fprintf(fptr,"%c",'D');//fprintf
	printf("programe executed.");
	
	fclose(fptr);
}
