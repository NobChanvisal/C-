#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
void column(int l, string title){
	cout<< setw(l) << title;
}
void input(string &v, string text){
	cout<< text;cin>>v;fflush(stdin);
}
int main(){
	string id;
	input(id,"Enter id: ");
	cout<<id;
	cout<< endl;
	cout<< left;
	column(20, "Name");
	column(10, "Sex");
}