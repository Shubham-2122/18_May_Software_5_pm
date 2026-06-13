/*
	
	singel : Class A to Class B 
	class A{
	
	}
	class B : public A {
	
	}

	class C : public B {
	
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
class C : public B{
	public:
		void data2(){
			cout<<"\nC Compoenent";
		}
};

int main()
{

	C ob;
	ob.data1();
	ob.data();
	ob.data2();
	
		
	return 0;
}
