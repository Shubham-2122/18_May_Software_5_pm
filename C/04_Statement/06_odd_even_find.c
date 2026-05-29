#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter your Number :");
	scanf("%d",&num);
	
	printf("your Num : %d",num);
	
	if(num%2==0){
		printf("\nEven number : %d",num);
	}
	else{
		printf("\nOdd number : %d",num);
	}
	
	getch();
}
