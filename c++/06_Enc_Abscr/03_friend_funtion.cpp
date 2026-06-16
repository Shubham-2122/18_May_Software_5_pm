/*
	private : Class access : (block) friend 
	
	1) friend function
	2) friend class
*/

#include<iostream>
using namespace std;

class Karan{
	private:
		int money = 500;
	public:
		friend void nimesh(Karan k);
};

void nimesh(Karan k){
	cout<<"nimesh Money : "<<k.money;
}



int main()
{
	Karan s1;
	nimesh(s1);
	
	return 0;
}
