#include<iostream>
#include<fstream>

using namespace std;

int main(){
	// write 
	ofstream file("practice.txt",ios::app);
	
	if(!file){
		cout<<"error";
		return 1;
	}
	
	file<<"3.dabase language"<<endl;
	file<<"4.python language"<<endl;
	
	
	file.close();
	
	cout<<"data success";
	
	return 0;
}
