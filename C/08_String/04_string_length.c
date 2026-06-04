#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name1[20];
	char name2[20];
	char surname[20];
	int x,comp;
	
	printf("Enter your Name : ");
	
	//	end line 
	//	scanf("%s",&name1);

	//Enter keyword end line 
	gets(name1);
	printf("Name : %s",name1);
	
	x = strlen(name1);
	
	printf("\nString length : %d",x);
	
	strcpy(name2,name1);
	printf("\nName 1 string : %s",name2);
	
	strupr(name2);
//	printf("\nName 2 string : %s",name2);
	printf("\nName 1 uopper Case : %s",name2);
	strlwr(name2);
	printf("\nName 1 Lower Case : %s",name2);
	
	printf("\nEnter your Name 2 : ");
	gets(surname);
	printf("Name 2 string : %s",surname);
	
	comp = strcmp(name1,surname);
	
	if(comp == 0){
		printf("\nString are matched...");
	}
	else{
		printf("\nString are not Matched...");
	}
	
	getch();
}  
