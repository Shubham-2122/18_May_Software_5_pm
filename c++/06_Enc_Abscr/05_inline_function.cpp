#include<iostream>
using namespace std;

inline int sqaure(int x){
	return x*x*x;
}

int main()
{
	int num;
	cout<<"Enter your num :";
	cin>>num;
	cout<<"\nYour number : "<<num;
//	cout<<"\nSquare finde : "<<sqaure(num);
	cout<<"\ncube finde : "<<sqaure(num);
	return 0;
}
