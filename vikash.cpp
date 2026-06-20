#include<iostream>
#include<fstream>

using namespace std;

int main(){
	// write 
	ofstream file("practice.txt");
	
	if(!file){
		cout<<"error";
		return 1;
	}
	
	file<<"1.c language"<<endl;
	file<<"2.c++ language"<<endl;
	
	
	file.close();
	
	cout<<"data success";
	
	return 0;
}
