#include <antheader.h>
/*
int main(){
//table color
	for(int i = 0; i<=255; i++){
		foreColor(i);
		cout<< "Color is: "<< i<< endl;
	}
}
*/
void output(string text, int color = 7){
	foreColor(color);
	cout<<text;
	foreColor(7);
}
void input(string &v, int color = )
int main(){
	string name, phone;
	foreColor(167);
	cout<< "Welcome to C++ Programming langauge"<<endl;
	foreColor(7);
	output("-----------------------------------\n",1);
	cout<< "Enter name : ";foreColor(2);getline(cin,name);
	fflush(stdin);
	foreColor(7);
	cout<< "Enter phone: ";foreColor(2);getline(cin,phone);
	fflush(stdin);
	foreColor(7);
}