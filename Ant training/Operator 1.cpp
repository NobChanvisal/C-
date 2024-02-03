#include <iostream>
#include <stdlib.h>
using namespace std;/*
int main(){
	unsigned short a, b;
	cout<<" a= "; cin>>a;fflush(stdin);
	cout<<" b= "; cin>>b;fflush(stdin);
	cout<<"_______________"<<endl;
	cout<<"Answer: "<<a % b<<endl;
	cout<<"Answer: "<<a / b<<endl;
	cout<<"Answer: "<<a + b<<endl;
	cout<<"Answer: "<<a - b<<endl;
	cout<<"Answer: "<<a * b<<endl;
}*/
int main(){
	float d, t, v;
	cout<<"Calculate Speed"<<endl;
	cout<<"------------------"<<endl;
	cout<<"Enter d(m): ";cin>>d;fflush(stdin);
	cout<<"Enter t(s): ";cin>>t;fflush(stdin);
	 v=d/t;
	 
	cout<<"__________________"<<endl;
	cout<<"So that v= "<< v <<" m/s"<<endl;
	cout<<"__________________"<<endl;
	cout<<"So that v= "<< d <<" / " << t <<" = " << v<< " m/s";
}