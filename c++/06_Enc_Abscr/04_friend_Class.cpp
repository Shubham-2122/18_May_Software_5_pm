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
		friend class Nimesh;
};

class Nimesh : public Karan{
	public:
		void show(Karan k){
			cout<<"Nimesh Money : "<<k.money;
		}
};



int main()
{
	Karan s1;
	Nimesh ob;
	ob.show(s1);

	return 0;
}
