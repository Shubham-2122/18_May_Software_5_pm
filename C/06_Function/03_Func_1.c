/*
	1) without parameter and no return
	
	syntax : 
	void name(){
		logic
	}
	
	name()
		
*/

#include<stdio.h>
#include<conio.h>

void printLine(){
	int i;
	for(i=1;i<=40;i++){
		printf("*");
	}
}

void cla(){
	int a=20;
	int b=10;
	printf("Sum : %d",a+b);
}

void main()
{
	printLine();
	printf("\nShubham jadav\n");
	printLine();
	printf("\n");
	cla();
	printf("\n");
	printLine();
	
	getch();
}

