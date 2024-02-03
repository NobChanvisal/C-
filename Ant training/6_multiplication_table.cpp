#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main(){
	unsigned int a,b,i;
	char ch;
	enter:
	system("cls");
	cout<< endl<<endl;
	cout<< "\t|^^| Multiplication Table |^^|"<<endl;
	cout<< "\t------------------------------------"<<endl;
	cout<< "\tEnter multple number  : ";cin>>a;fflush(stdin);
	cout<< "\tEnter times           : ";cin>>b;fflush(stdin);
	cout<< "\t------------------------------------"<<endl;
		for(i=1; i<=b; i++){
			cout<< "\t"<< a <<" * "<< i <<" = "<<a*i <<endl;
		}
	cout<< "\t____________________________________"<<endl;
	cout<< "\tPress a to enter again" <<endl;
	ch=getch();
	if(ch==65 || ch==97)
	goto enter; 
}