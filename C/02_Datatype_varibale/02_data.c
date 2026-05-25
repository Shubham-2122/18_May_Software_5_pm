#include<stdio.h>
#include<conio.h>

void main()
{
//	datatpe varib-name = value
//	1) interger - 4 bytes
printf("----Int Varibles----\n");
	int a = 10;
	int b = -20;
	printf("A : %d",a);
	printf("\nB : %i",b);
	
//	2) float : decimal vlaue 8 bytes
	printf("\n----Float Varibles----"); 
	float ab = 234.56;
	printf("\nab : %f",ab);
	printf("\nab : %.3f",ab);
	printf("\nab : %.2f",ab);
	printf("\nab : %.1f",ab);
	
	//	3) char : singel value letter 1bytes
	printf("\n----Char Varibles----");
	
	char Name = 's';
	
	printf("\n char : %c",Name);
	printf("\n S : %i",Name);
	getch();
}
