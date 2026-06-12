#include<iostream>
using namespace std;

class Student{
	private:
//		data memeber
		int marks;
		string name;
	public:
//		member function
		void putdata(){
			cout<<"Enter your Name : ";
			cin>>name;
			cout<<"Enter your marks : ";
			cin>>marks;
		}
		void getData(){
			cout<<"\nName : "<<name;
			cout<<"\nMarks : "<<marks;
		}
};

int main()
{
	Student user,karn;
	user.putdata();
	user.getData();
//	user.getData();
	
//	karn.putdata();
//	karn.getData();
	return 0;
	
}
