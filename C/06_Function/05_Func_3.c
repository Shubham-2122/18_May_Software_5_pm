/*
	with paramter and no return
	
		syntax : 
	void name(int x,int y){
		logic
		printf(hello)
	}
	
	name(10,20)
	
*/

#include<stdio.h>
#include<conio.h>

void mul(int a,int b){
	int res ;
	res = a * b;
	printf("Mul : %d \n",res);
}

void main()
{
	mul(30,20);
	mul(10,20);
	
	getch();
}
