#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter your A :";
	cin>>a;
	cout<<"Enter your B :";
	cin>>b;
	cout<<"Enter your C :";
	cin>>c;
	
	float per =	(a+b+c) / 3;
	cout<<"Per : "<<per;
	 
	if(a > 33){
		if(b> 33){
			if(c>33){
				if(per >= 85 && per<=100){
					cout<<"\nA grade Student : "<<per<<"%";
				}
				else if(per >=70 && per<85){
					cout<<"\nB Grade Student :  "<<per<<" %";
				}
				else if(per >= 55 && per<70){
					cout<<"\nC Grade Student :  "<<per<<" %";
				}
				else if(per >= 33 && per<55){
					cout<<"\nD Grade Student :  "<<per<<" %";
				}
				else{
					cout<<"\n Fail Student :  "<<per<<" %";
				}
			}
			else{
				cout<<"\nsubject 3 fail";
			}
		}
		else{
			cout<<"\nsubject 2 fail";
		}
	}
	else{
		cout<<"\nSubject 1 Fail..";
	}
	
	
	
	
	return 0;
}
