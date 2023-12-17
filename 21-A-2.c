//Count chars, spaces, tabs and new lines in a file
#include<stdio.h>
void main(){
	FILE *fp;
	
	char ch;
	int c=0,s=0,t=0,nl=0;
	fp=fopen("21-A-1.txt","r");
	ch=getc(fp);
	if(fp==NULL){
		printf("error! while opening file.");
	}
	while(ch!= EOF){
		if(ch==' ')
		s++;
		else if(ch=='\t')
		t++;
		else if(ch=='\n')
		nl++;
		else
		c++;
		ch=getc(fp);
	}
	fclose(fp);
	printf("no. of chars=%d \nspaces=%d \ntabs=%d \nand new lines=%d",c,s,t,nl);
}
