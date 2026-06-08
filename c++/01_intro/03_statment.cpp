#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter your A :";
	cin>>a;
	cout<<"Enter your B :";
	cin>>b;
	cout<<"Enter your C :";
	cin>>c;
	
	
	if(a>b && a>c){
		cout<<"A is Max : "<<a;
	}
	else if(b>c){
		cout<<"B is Max : "<<b;
	}
	else{
		cout<<"C is Max : "<<c;
	}
	
	
	return 0;
}
