#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main(){
	unsigned int i,n,j;
	float java,c,cpp;
	//double
	float total ,evg;
	cout<< "Score Table"<<endl;
	cout<< "--"<<endl;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	cout<< "--"<<endl;
	string score[n][4];
	
	for(i=0; i<n; i++){
		for(j=0; j<4; j++){
			switch(j){
				case 0: cout<< "Enter Name : ";getline(cin,score[i][j]);fflush(stdin);
						break;
				case 1: cout<< "Enter Java  : ";cin>>score[i][j];fflush(stdin);
						break;
				case 2: cout<< "Enter C    : ";cin>>score[i][j];fflush(stdin);
						break;
				case 3: cout<< "Enter C++  : ";cin>>score[i][j];fflush(stdin);
						break;
			}
			fflush(stdin);
		}
		cout<<endl;
	}
	cout<< endl;
	for(i = 1; i < 85; i++){
		cout<< "_";
	}
	cout<< endl;
	cout<< left;
	cout<< setw(20) << "Name";
	cout<< setw(10)  << "Java";
	cout<< setw(10)  << "C";
	cout<< setw(10)  << "C++";
	cout<< setw(15) << "Total";
	cout<< setw(15) << "Everage";
	cout<< setw(5) << "Grand";
	cout<< endl;
	for(i = 1; i < 85; i++){
		cout<< "_";
	}
	cout<< endl;
	for(i=0; i<n; i++){
		for(j=0; j<7; j++){
			switch(j){
			case 0: cout<< setw(20)<< score[i][j];
					break;
			case 1: cout<< setw(10)<< score[i][j];
					java = stof(score[i][j]);
					break;
			case 2: cout<< setw(10)<< score[i][j];
					c = stof(score[i][j]);
					break;
			case 3: cout<< setw(10)<< score[i][j];
					cpp = stof(score[i][j]);
					break;
			case 4: 
					total = java + c + cpp;
					cout<< setw(15)<< total;
					break;
			case 5: 
					evg = total/3;
					cout<< setw(15)<< evg;
					break;
			case 6: 
					cout<< setw(5);
					break;
			}
		}
	}
	getch();
	return 0;
}