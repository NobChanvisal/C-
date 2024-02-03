#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int num;
	bool result1,result2,result3;
	cout<< endl<<endl;
	cout<< "\tEnter password: ";cin>> num;
		result1 = (num>0 && num<50);
	cout<< "\t____________________"<< endl;
	cout<< "\tAnswer1: "<< result1<<endl;
		result2 = (num % 2)== 1;
	cout<< "\t--------------"<<endl;
	cout<< "\tAnswer2: "<< result2<<endl;
		result3 = (num % 2 == 0 && num % 3 == 0);
	cout<< "\t--------------"<<endl;
	cout<< "\tAnswer3: "<< result3<<endl;
	getch();
	return 0;
}