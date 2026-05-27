/*
	only for true value 
	
	syntax : 
	
	if(coditon){
		code
	}

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age ;
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Your Age :%d",age);
	
	
	if(age >= 18){
		printf("\nAge is Allow");
	}
	
//	if(age < 18){
//		printf("\nAge is Allow");
//	}
	
	getch();
}
