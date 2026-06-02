/*
	
	5 = 5+4+3+2+1+0 = 15
	
*/

#include<stdio.h>
#include<conio.h>

int total(int n){
	int sum = 0,i;
	
	for(i=n;i>=0;i--){
		sum=sum + i;
	}
	return sum;
}

void main(){
	
	int num;
	printf("Enter your Number :");
	scanf("%d",&num);
	
	printf("Number Of Num : %d",num);
	printf("\nTotal Number Of Sum : %d",total(num));
	
	getch();
}
