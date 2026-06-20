#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		int rollno;
		char name[30];
		char div[10];
		
		public:
			Student(){
				cout<<"Enter your rollno:";
				cin>>rollno;
				
				cout<<"Enter your name:";
				cin>>name;
				
				cout<<"Enter your div:";
				cin>>div;
			}
			
			//parameter constrocuter
			Student(int r, const char nm[30], const char d[10]){
				rollno=r;
				strcpy(name,nm);
				strcpy(div,d);
			}
			
			//deconstructor
			~Student(){
				printf("\n hello student");
			}
			
			void display(){
				cout<<"\n Rollno:"<<rollno;
				cout<<"\n name:" <<name;
				cout<<"\n div:" <<div;
			}
};

int main(){
	Student s1;
	s1.display();
	
	Student s2(1,"meet","B");
	s2.display();
}
