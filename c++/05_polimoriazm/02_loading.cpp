#include<iostream>
using namespace std;

class Perent{
	public:
		void display(int x){
			cout<<"\nX value : "<<x;
		}
		void display(int x,int y){
			cout<<"\nSum : "<<x+y;
		}
		void display(float a,float b){
			cout<<"\nSub : "<<a-b;
		}
};

int main()
{
	Perent ab;
	
	ab.display(10);
	ab.display(20,20);
	ab.display(30.5,40.5);
	
	return 0;
}
