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

class B {
	public:
		void data1(){
			cout<<"\nB Compoenent";
		}
};
class C : public B, public A{
	public:
		void data2(){
			cout<<"\nC Compoenent";
		}
};

int main()
{
	
	C data;
	data.data();
	data.data2();
	data.data1();


		
	return 0;
}
