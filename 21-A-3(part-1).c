// Demonstrate functions 
//fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind(). 
#include<stdio.h>
void main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("21-A-3(part-1).txt","w");
	ch='D';
	fprintf(fptr,"%c",ch);
	ch='e';
	fprintf(fptr,"%c",ch);
	ch='v';
	fprintf(fptr,"%c",ch);
	ch='a';
	fprintf(fptr,"%c",ch);
	ch='n';
	fprintf(fptr,"%c",ch);
	ch='s';
	fprintf(fptr,"%c",ch);
	ch='h';
	fprintf(fptr,"%c",ch);
	printf("programe executed.");
	
	fclose(fptr);
}
