#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	char str[100];
	
	file = fopen("test.txt","r");
	
//	file error
	if(file == NULL){
		printf("This File can not be Fined..");
		return 1;
	}
	
	while(fgets(str,100,file) != NULL){
		printf("%s",str);
	}
	
	fclose(file);

	
	return 0;
}
