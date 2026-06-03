#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	
	for(i=0;i<=4;i++){
		printf("Enter your Elements : ");
		scanf("%d",&a[i]);
	}
	
	printf("\nArray Element Show \n");
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	printf("\nAssceding order \n");
	
//	40 30 10 50 20
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] > a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
		printf("\nDesceding order \n");
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] < a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	
	getch();
} 
