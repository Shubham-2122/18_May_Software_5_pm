#include<iostream>
using namespace std;

int main()
{
	string name;
	
	cout<<"Enter your name : ";
//	cin>>name;
	getline(cin,name);
	
	cout<<"Name :"<<name;
	
	return 0;
}
