#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
/*
int main(){
	//cout << setw(20);(use with (iomanip))
	for( int i = 1; i <= 69; i++){
		cout<< "-";
	}
	cout<< endl;
	
	cout << left;
	cout << setw(20) << "Name";
	cout << setw(10) << "Sex";
	cout << setw(17) << "Phone";
	cout << setw(20) << "Email" << endl;
	for( int i = 1; i <= 69; i++){
		cout<< "-";
		}
		cout<< endl;
			
	cout << left;
	cout << setw(20) << "Visal";
	cout << setw(10) << "Male";
	cout << setw(17) << "0965920585";
	cout << setw(20) << "chanvisalnob@gmail.com" << endl;
	for( int i = 1; i <= 69; i++){
		cout<< "-";
		}
		cout<< endl;	
}*/
int main(){
	unsigned int i,j,n;
	cout << "Enter number of student: ";cin>>n;
	fflush(stdin);
	cout<< endl;
	
	string stu[n][4];
	//input
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<4; j++)
		{
			switch(j){
				case 0: cout<< "Enter name : ";getline(cin, stu[i][j]);
						break;
				case 1: cout<< "Enter sex  : ";cin>>stu[i][j];
						break;
				case 2: cout<< "Enter phone: ";cin>>stu[i][j];
						break;
				case 3: cout<< "Enter mail : ";cin>>stu[i][j];
						break;
			}
			fflush(stdin);
		}
		cout<< endl<<endl;
	}
	//header table:
	for(i = 1; i <= 69; i++){
		cout<< "-";
	}
	cout<< endl;
	
	cout << left;
	cout << setw(20) << "Name";
	cout << setw(10) << "Sex";
	cout << setw(17) << "Phone";
	cout << setw(20) << "Email" << endl;
	for(i = 1; i <= 69; i++){
		cout<< "-";
		}
		cout<< endl;
	
	//Output:
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<4; j++)
		{
			switch(j){
				case 0: cout<< setw(20)<< stu[i][j];
						break;
				case 1: cout<< setw(10)<< stu[i][j];
						break;
				case 2: cout<< setw(17)<< stu[i][j];
						break;
				case 3: cout<< setw(20)<< stu[i][j];
						break;
			}
		}
	}
	//footder table:
	cout << endl;
	for(i = 1; i <= 69; i++){
		cout<< "-";
	}
	cout<< endl;	
}