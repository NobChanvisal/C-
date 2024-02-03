#include <iostream>
#include <string>
using namespace std;
int main(){
	string fname, lname, u;
	char gender;
	unsigned short age;
	//Input:
	cout<<"Fill information"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Enter Firtname   :";getline(cin,fname);fflush(stdin);
	cout<<"Enter Lastname   :";getline(cin,lname);fflush(stdin);
	cout<<"Enter Gender     :";cin>>gender;fflush(stdin);
	cout<<"Enter Age        :";cin>>age;fflush(stdin);
	cout<<"Enter University :";getline(cin,u);fflush(stdin);
	//output:
	cout<<"_________________________"<<endl;
	cout<<"Firtname   : "<<fname<<endl;
	cout<<"Lastname   : "<<lname<<endl;
	cout<<"Fullname   : "<<fname<<" "<<lname<<endl;
	cout<<"Gender     : "<<gender<<endl;
	cout<<"Age        : "<<age<<endl;
	cout<<"University : "<<u<<endl;
}