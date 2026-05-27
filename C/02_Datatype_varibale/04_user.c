#include<stdio.h>
#include<conio.h>

void main()
{
	int a; //declaration
	int b;
	
	printf("Enter Your A :");
	scanf("%d",&a); //address of a / varibale name
	printf("Enter Your B :");
	scanf("%d",&b);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	printf("\nSum : %d",a+b);
	printf("\nSub : %d",a-b);
	
	getch();
}
