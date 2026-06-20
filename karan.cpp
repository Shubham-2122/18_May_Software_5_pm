#include<iostream>
#include<string.h>
using namespace std;

class Student {
	private : 
		string name[100];
		int count=0;
		string search_name;
			int i,found=1;
			
	public :
		void addname(){
			cout<<"\n\nAdd a name : ";
			cin>>ws;
			getline(cin,name[count]);
			count++;
			
			cout<<"\nName added!!";
		}
		void display(){
		
			
			if(count==0){
				cout<<"\nThere is no value ";
			}
			else{
			
				for(i=0;i<count;i++){
					cout<<"name : "<<i+1<<name[i];
				}
			}
		}
		void search(){
			cout<<"\nEnter the name to search : ";
			cin>>ws;
			getline(cin,search_name);
			for(i=0;i<count;i++)
			{
				if(name[i]==search_name){
					cout<<"\nthe name was found!!at position"<<i;
					found=0;
					break;
				}
			}
			if(found==1){
				cout<<"\nThe name was not found!!";
			}
		}
		
		
};
int main(){
	
	int choice;
	Student obj;
	do{
		cout<<"\nChoose a function to perform \n1.addname\n2.display\n3.search\n4.exit \n enter your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\t\t-------Addname--------\n";
				obj.addname();
				break;
			case 2:
				cout<<"\n\t\t-------display name--------\n";
				obj.display();
				break;
			case 3 :
				cout<<"\n\t\t----------search name---------\n";
				obj.search();
			case 4 :
				cout<<"\n\nexit!!";
				break;
			default :
				cout<<"\n\Invilid input ";
				break;
		}
		
		
	}while(choice!=4);
	return 0;
	
}
