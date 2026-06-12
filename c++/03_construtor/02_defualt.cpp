#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
	public:
		Student(){
			cout<<"Enter your roll no : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>name;
		}
		void display(){
			cout<<"Roll no : "<<rollno;
			cout<<"\nName : "<<name;
		}
};

int main()
{
	
	Student s1;
	s1.display();
	
	return 0;
}
