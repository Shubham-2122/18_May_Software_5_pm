#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream file("practice.txt");
	
	cout<<"-------your file reading mode:-----"<<endl;
	
	string f;
	
	while(getline(file,f)){
		cout<<f<<endl;
		
	}
	
	file.close();
	
	return 0;
}
