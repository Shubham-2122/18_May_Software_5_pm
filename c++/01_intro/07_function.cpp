#include<iostream>
using namespace std;

void demo(){
	int i;
	for(i=1;i<=30;i++){
		cout<<"-";
	}
}

// mul wihout return and with paramter
void Mul(int a,int b){
	int mul;
	mul = a*b;
	cout<<"\nMul : "<<mul;
}

int main()
{
	demo();
	cout<<"\nShubham jadav\n";
	demo();
	Mul(30,20);
	Mul(50,30);
	return 0;
}
