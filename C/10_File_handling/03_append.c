#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	char str[100];
	
	file = fopen("test.txt","a");
	
//	file error
	if(file == NULL){
		printf("This File can not be Fined..");
		return 1;
	}
	
	fputs("\nThis is append data.",file);
	
	fclose(file);
	
	printf("File data successfully printed..");

	
	return 0;
}
