/*
	
	switch(numer){
		case 1:
			break;
		case 2:
			break;
			
		default:
	}
	
*/

#include<stdio.h>
#include<conio.h>

void main()
{	
	int choice;
	
	printf("Enter your Choice :");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuseday");
			break;
		case 3:
			printf("\nWensday");
			break;
		case 4:
			printf("\nthursday");
			break;
		case 5:
			
			printf("\nFriday");
			break;
		default:
			printf("\nInvalid case..");
	}
	
	getch();
}
