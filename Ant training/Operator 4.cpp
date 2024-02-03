#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
	string user,pw;
	bool result;
	cout<< "Enter username: ";fflush(stdin);getline(cin,user);
	cout<< "Enter password: ";fflush(stdin);getline(cin,pw);
		
		result = ((user == "visal" || user == "visal@gmail.com") && pw == "abc123");
	//cout<<result;
	if(result==true){
		cout<< "Login successful"<<endl;
	}
	else
		cout<< "Incorrect "<<endl;
}