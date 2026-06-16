/*
	private : Class access : (block)
	protected: 

*/

#include<iostream>
using namespace std;

class Perent{
	protected:
		int a = 10;
	}
};

class Child : public Perent{
	public:
		void show(){
			cout<<"A : "<<a;
		}
};


int main()
{
	Child ob;
	ob.show();

//	cout<<"A : "<<a;

	return 0;
}
