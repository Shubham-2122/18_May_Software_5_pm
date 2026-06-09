#include<iostream>
using namespace std;


int main()
{
	int i;
	
//	for(i=1;i<=10;i++){
//		cout<<"\n"<<i;
//	}
//	
//	for(i=10;i>=1;i--){
//		cout<<"\n"<<i;
//	}
//	

// 2,3,4,5
//	for(i=1;i<=10;i++){
//		if(i>=2 && i<6){
//			cout<<"\n"<<i;
//		}
//	}	


//	1,6,7,8,9,10
 	for(i=1;i<=10;i++){
		if(!(i>=2 && i<6)){
			cout<<"\n"<<i;
		}
	}
	
	return 0;
}
