#include<stdio.h>
#include<conio.h>

void main()
{
	char name1[20];
	
	printf("Enter your Name : ");
	
	//	end line 
	//	scanf("%s",&name1);

	//Enter keyword end line 
	gets(name1);
	printf("Name : %s",name1);

	
	getch();
} 
