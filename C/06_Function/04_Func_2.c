 /*
	1) with paramter and with return 
	
	syntax : 
	int name(int x,int y){
		logic
		return
	}
	
	name(10,20)
		
*/

#include<stdio.h>
#include<conio.h>

int sum(int x,int y){
	int add;
	add = x + y;
	return add;
}


void main()
{
	
	int result = sum(40,56);

	printf("Sum : %d",sum(20,10));
	printf("\nSum : %d",sum(25,13));
	printf("\nSum : %d",sum(47,13));
	
	printf("\nResult : %d",result);
	getch();
}

