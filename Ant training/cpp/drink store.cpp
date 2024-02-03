#include "D:\cpp/drink.h"

int main(){
	unsigned int n;
	double subTotal;
	cout<< "Drink Store New Version"<< endl;
	cout<< "-----------------------"<< endl;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	cout<< "-----------------------"<< endl;
	Drink dr[n];
	for(int i = 0; i<n; i++){
		dr[i].input();
	
	}
	cout<< "---------------------------------------------------"<<endl;
	cout<< left;
	cout<< setw(20)<< "Name";
	cout<< setw(10)<< "Qty";
	cout<< setw(10)<< "Price";
	cout<< setw(10)<< "Total"<< endl;
	cout<< "---------------------------------------------------"<<endl;
	for(int i = 0; i<n; i++){
		dr[i].output();
		subTotal += dr[i].total();
	}
	cout<< "---------------------------------------------------"<<endl;
	cout<< "Sub Total"<<setw(40)<<subTotal;
}