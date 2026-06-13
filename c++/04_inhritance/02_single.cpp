/*
	
	singel : Class A to Class B 
	class A{
	
	}
	class B : public A {
	
	}

*/
#include<iostream>
using namespace std;

class A {
	public:
		void data()
		{
			cout<<"\nA compoenent";
		}	
};

class B : public A {
	public:
		void data1(){
			cout<<"\nB Compoenent";
		}
};

int main()
{
	B ob;
	ob.data1();
	ob.data();
	ob.data();
		
	return 0;
}
