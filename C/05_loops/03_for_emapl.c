#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	
//	for(i=1;i<=10;i++){
//		if(i>5){
//			break;
//		}
//		printf("\ni : %d",i);
//	}

//	for(i=1;i<=10;i++){
//		if(i <= 5){
//			printf("\ni : %d",i);
//		}
//		
//	}	

//	for(i=1;i<=10;i++){
//		if(i > 5){
//			printf("\ni : %d",i);
//		}
//	}


//	for(i=1;i<=10;i++){
//		if( i>=3 && i<=6){
//			printf("\ni : %d",i);
//		}
//	}	


	for(i=1;i<=10;i++){
		if( !(i>=3 && i<=6)){
			printf("\ni : %d",i);
		}
	}
	
	getch();
}
