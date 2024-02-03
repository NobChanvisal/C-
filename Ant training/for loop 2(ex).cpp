#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int n,i,mul;
	char ch;
	start:
	cout<< "\tMultiplication Table" <<endl;
	cout<< "\t_______________________________"<<endl <<endl;
	cout<< "\tEnter n: ";cin>>n;fflush(stdin);
	cout<< "\t_______________________________"<<endl;
		for(i=1; i<=10; i++){
			mul = n*i;
			cout << "\t"<< n <<" * "<< i << " = "<< mul<< endl;
		}
	cout<< "\tPress Enter to continue=)"<<endl;
	ch=getch();
	if(ch==13)
	goto start;
}