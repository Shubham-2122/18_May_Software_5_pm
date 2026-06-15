#include<iostream>
using namespace std;

class Perent{
	public:
		void display(){
			cout<<"\nPerent Compo...";
		}	
};

class Child : public Perent{
	public:
		void display(){
			cout<<"\nChild Compo...";
		}
};

int main()
{
	Child ob;
	
	ob.display();
	ob.display();
	ob.display();
	
//	scope resolution : prenet call and function call
	ob.Perent::display();
	
	return 0;
}
