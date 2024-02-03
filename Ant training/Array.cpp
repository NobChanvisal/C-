#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int i,n;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	string names[n];
	for(i = 0; i<n; i++){
		cout<< "Enter name[" << i + 0 << "]: ";getline(cin,names[i]);
		fflush(stdin);
	}
	cout<< "List name: ";
		for(i = 0; i<n; i++){
			cout<< names[i]<< ",";
		}
		cout<<"\b\b\b"<<endl;;
		
}
/*
int main(){
	unsigned int i;
	string names[3];
	for(i = 0; i<3; i++){
		cout<< "Enter name: ";getline(cin,names[i]);
		fflush(stdin);
	}
	/*
	names[0] = "Dara";
	names[1] = "Visal";
	names[2] = "Ronaldo";
	
	cout<< "List name: ";
		for(i = 0; i<3; i++){
			cout<< names[i]<< ", ";
		}
		cout<<"\b\b\b"<<endl;;
	//cout<< "List name: "<< names[0] << ','<< names[1]<< ","<< names[2];
	
}*/
