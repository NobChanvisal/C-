#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
	int id;
	string fname,lname,u,plan;
	char gender;
	int age;
	//input:
	cout<<"Id        : ";fflush(stdin);cin>>id;
	cout<<"Firt name : ";fflush(stdin);cin>>fname;
	cout<<"Last name : ";fflush(stdin);cin>>lname;
	cout<<"Gender    : ";fflush(stdin);cin>>gender;
	cout<<"Age       : ";fflush(stdin);cin>>age;
	cout<<"University: ";fflush(stdin);cin>>u;
	cout<<"Plan Goal : ";fflush(stdin);getline(cin,plan);
	//output:
	cout<<endl<<endl;
	cout<<"My personal information"<<endl;
	cout<<"_______________________"<<endl;
	cout<<"Id        : "<<id<<endl;
	cout<<"Firt name : "<<fname<<endl;
	cout<<"Last name : "<<lname<<endl;
	cout<<"Full name : "<<fname<<" "<<lname<<endl;
	cout<<"Gender    : "<<gender<<endl;
	cout<<"Age       : "<<age<<endl;
	cout<<"University: "<<u<<endl;
	cout<<"Plan Goal : "<<plan<<endl;
}