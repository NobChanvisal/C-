#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>


using namespace std;
const int W_DRINK_NAME = 20;
const int W_QTY = 15;
const int W_PRICE = 15;
const int W_TOTAL = 15;
void line(){
		for(int i = 1; i < 65; i++){
		cout<< "_";
	}
	cout<<endl;
}
int main(){
	unsigned int i,n,j;
	
	double qty,pr,total,st = 0,save,pay;
	cout<< "Drink Store"<<endl;
	for(i = 1; i < 65; i++){
		cout<< "_";
	}
	cout<< endl;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	for(i = 1; i < 65; i++){
		cout<< "_";
	}
	cout<<endl <<endl;
	string jr[n][3];
	for(i = 0; i<n; i++){
		for(j = 0; j<3; j++){
			switch(j){
				case 0 : cout<< "Enter Name     : ";getline(cin,jr[i][j]);
						 break;
				case 1 : cout<< "Enter Qty(can) : ";cin>>jr[i][j];
						 break;
				case 2 : cout<< "Enter Price($) : ";cin>>jr[i][j];
						 break;
			}
			fflush(stdin);
		}
		cout<<endl;
	}
	
	cout<< endl;
	for(i = 1; i < 65; i++){
		cout<< "-";
	}
	cout<< endl;
	cout<< left;
	cout<< setw(W_DRINK_NAME)<< "Name";
	cout<< setw(W_QTY)<< "Qty";
	cout<< setw(W_PRICE)<< "Price";
	cout<< setw(W_TOTAL)<< "Total";
	cout<< endl;
	for(i = 1; i < 65; i++){
		cout<< "-";
	}
	cout<< endl;
	for(i = 0; i<n; i++){
		for(j = 0; j<4; j++){
			switch(j){
				case 0: cout<< setw(W_DRINK_NAME)<<jr[i][j];
						break;
				case 1: cout<< setw(W_QTY);
						if(stod(jr[i][j])>1){
							cout<<jr[i][j] + "Cans";
						}
						else
						{
							cout<<jr[i][j] + "Can";
						}
						qty = stod(jr[i][j]);
						break;
				case 2: cout<< setw(W_PRICE)<<jr[i][j] + "$";
						pr = stod(jr[i][j]);
						break;
				case 3: 
						total = qty*pr;
						cout<< setw(W_TOTAL)<<total;
						st += total;
						break;
			}	
		}
		cout<<endl;
	}
	for(i = 1; i < 65; i++){
		cout<< "_";
	}
	cout<< endl;
	cout<< setw(W_DRINK_NAME + W_QTY + W_PRICE)<< "Sub total"<<setw(W_TOTAL)<<st<<endl;
	cout<< "Discount  = "<< setw(W_DRINK_NAME + W_QTY + W_PRICE)<<setw(W_TOTAL)<<"20% "<<endl;
	save = st * 0.2;
	cout<< setw(W_DRINK_NAME + W_QTY + W_PRICE)<< "Save      = "<<save <<"$" <<endl;
	pay = st - save;
	cout<< setw(W_DRINK_NAME + W_QTY + W_PRICE)<< "Payment   = "<<pay << "$"<< endl;
	cout<< endl;
	getch();
	return 0;
}