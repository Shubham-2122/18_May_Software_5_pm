#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 20; 
	int b = 10;
	
	int max;
	
	max = (a>b) ? a : b;
	int min = (a < b) ? a : b;
	printf("max : %d",max);
	printf("\nMin : %d",min);
	
	getch();
}
