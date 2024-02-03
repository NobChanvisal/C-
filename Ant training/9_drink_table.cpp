#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main(){
	unsigned int i,j,n;
	string name;
	cout<< "\tDrink Table"<< endl;
	cout<<"\t";
	for(i = 1; i < 40; i++){
		cout<< "-";
	}
	cout<< "\n\tEnter numbers of drinkings: ";cin>>n;
	fflush(stdin);
	cout<<"\t";
	for(i = 1; i < 40; i++){
		cout<< "_";
	}
	string dr[n][3];
	//input:
	cout<< endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
		switch(j){
			case 0: cout<< "\n\tEnter Drink name : ";getline(cin,dr[i][j]);
					break;
			case 1: cout<< "\tEnter Price($)   : ";cin>>dr[i][j];
					break;
			case 2: cout<< "\tEnter Qty(can)   : ";cin>>dr[i][j];
					break;
		}
		fflush(stdin);	 
	}
	cout<< endl;
}
	cout<<"\t";
	for(i = 1; i < 40; i++){
		cout<< "_";
	}
	
	cout<< endl;
	cout<< "\t";
	cout<< left;
	cout<< setw(20) << "Drink Name";
	cout<< setw(10) << "Price";
	cout<< setw(10) << "Qty";
	cout<<"\n\t";
	for(i = 1; i < 40; i++){
		cout<< "_";
	}
	cout<< endl;
	cout<< "\t";
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
		switch(j){	
			case 0: cout<<setw(20)<<dr[i][j];			
					break;
			case 1: cout<<setw(10)<<dr[i][j] + "$";	 
					break;
			case 2:	cout<<setw(10)<<dr[i][j] + "Can";
					break;							
		} 
	}
	cout<<endl;
}
	cout<<"\t";
	for(i = 1; i < 40; i++){
		cout<< "_";
	}
	getch();		
	return 0;
}