#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 20; 
	int b = 10;
	
	int max;
	max = a > b;
	printf("max : %d",max);
	
	int min;
	min = a < b;
	printf("\nMin : %d",min);
	
	int x = 2;
	int y = 2;
	
	int compar = x == y;
	printf("\nComp : %d",compar);
	
	getch();
}
