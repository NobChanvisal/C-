#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int main(){
	float dolar,kh=4100,ex;
	cout<<endl<<endl;
	cout<< "\tMoney Exchange ($ to real):"<< endl;
	cout<< "\t________________________________________________________"<< endl;
	cout<< "\tWe can exchange your money, Don't be busy with your head"<< endl<<endl;
	cout<< "\tEnter Money($): ";cin>>dolar;
	cout<< "\t________________________________________________________"<< endl;
		ex=dolar*kh;
	cout<<"\t"<< dolar<< "$"<< " = "<<ex <<"real";
	getch();
	return 0;	
}