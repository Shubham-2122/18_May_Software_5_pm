#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10; //varibale
	int *p = &a; // pointer trigger 
	
	printf("A : %d",a);
	printf("\np : %d",p); // Address data
	printf("\nPointer : %u",*p); // value access
	getch();
}
