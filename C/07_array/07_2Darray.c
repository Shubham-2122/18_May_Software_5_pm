#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2];
	
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter your Element row : %d , col %d = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("---2d Array ---\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	
	
	
	getch();
}
