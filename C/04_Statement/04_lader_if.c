/*
	if(){
	
	}
	elseif (){
	}
	elseif(){
	}
	else{
	
	}
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int marks;
	printf("Enter your Marks : ");
	scanf("%d",&marks);
	printf("Marks : %d",marks);
	
	
	if(marks > 100 || marks < 0){
		printf("\nInvalid marks..");
	}
	else if(marks >= 85 && marks <=100){
		printf("\nA grade Student");
	}
	else if(marks >= 70 && marks< 85){
		printf("\nB Grade Student");
	}
	else if(marks < 70 && marks >= 55){
		printf("\nC Grade Student..");
	}
	else if(marks >34 && marks <55 ){
		printf("\nD Grade Student");
	}
	else{
		printf("\nFaild Student");
	}
	
	
	getch();
}
