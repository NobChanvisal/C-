#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int n,i;
	double an = 0;
	cout<< "Sum of Array"<<endl;
	cout<< "----------------------------"<<endl;
	cout<< "Enter n: ";cin>>n; fflush(stdin);
	cout<< "____________________________"<<endl;
	double num[n];
	cout<< "Enter number: "<< endl;
	//input:
		for(i = 0; i<n; i++){
			cout<< "Number["<< i + 1 <<"]: ";cin>> num[i];
			fflush(stdin);
			an += num[i];
		}
		cout<< "Sum = ";
	//output:
		for(i = 0; i<n; i++){
			cout<< num[i] << " + ";
		}
	cout<< "\b\b\b = "<<an <<endl;
	getch();
	return 0;
}