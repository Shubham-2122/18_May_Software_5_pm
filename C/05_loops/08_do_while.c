/*
	
	Exit control : exit check
	
	assigement
	do{
		..code
		inc.dec
	}while(codition);

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 1;
	
	do{
		printf("i : %d \n",i);
		i++;
	}while(i>=10);

	
	getch();
}
