#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	
	file = fopen("demo.txt","w");
	
//	file data ematy : null

	if(file == NULL){
		printf("This File can not be Fined..");
		return 1;
	}
	
	fprintf(file,"This is Your Demo File...");
	fclose(file);
	
	printf("Data Successfully print in file...");
	
	return 0;
}
