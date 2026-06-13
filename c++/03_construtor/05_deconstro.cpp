#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		int rollno;
		char name[30];
	public:
//		defualt 
		Student(){
			cout<<"Enter your roll no : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>name;
		}
//		parametr 
		Student(int r,const char nm[30]){
			rollno = r;
			strcpy(name,nm);				
		}
//		copy
		Student(Student &sh){
			rollno = sh.rollno;
			strcpy(name,sh.name);
		}
		void display(){
			cout<<"\nRoll no : "<<rollno;
			cout<<"\nName : "<<name;
		}
		~Student(){
			cout<<"\nHello this deconstro data.";
		}
};

int main()
{
//	defualt constr
	Student s1;
	s1.display();
	
//	parmer const 
	Student s2(2,"sujal");
	s2.display();
	
	Student s3(s1);
	s3.display();
	
	return 0;
}
