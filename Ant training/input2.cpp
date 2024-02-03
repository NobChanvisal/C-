#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
/*
int main(){
	int a,b;
	cout<<"Enter a: ";cin>>a;fflush(stdin);
	cout<<"Enter b: ";cin>>b;fflush(stdin);
	//Out put
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
}*/
int main(){
	string fname,lname;
	unsigned short age;
	cout<<"Input firtname:";fflush(stdin);getline(cin,fname);
	cout<<"Input lastname:";fflush(stdin);getline(cin,lname);
	cout<<"Input age: ";fflush(stdin);cin>>age;
	//out put:
	cout<<"Firtname: "<<fname<<endl;
	cout<<"Lastname: "<<lname<<endl;
	cout<<"Fullname: "<<fname<<""<<lname<<endl;
	cout<<"Age : "<<age<<endl;
}