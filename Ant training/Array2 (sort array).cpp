#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int i,n,j,temp;
	cout<< "Sort Array"<<endl;
	cout<< "----------------------------------------"<<endl;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	cout<< "________________________________________"<<endl;
	int num[n];
		for(i = 0; i<n; i++){
			cout<< "Number["<<i <<"]: ";cin>>num[i];
			fflush(stdin);
		}
	cout<< "========================================"<<endl;
	cout<< "Original: "<<endl;
		for(i = 0; i<n; i++){
			cout<< num[i] << " , ";
		}
	cout<< "\b\b\b  ";
		for(i = 0; i<n-1; i++)
			for(j = i+1; j<n; j++)
				if(num[i] > num[j])
				{
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}	
	cout<< "\nOriginal: "<<endl;
		for(i = 0; i<n; i++){
			cout<< num[i] << " , ";
		}
	cout<< "\b\b\b  ";	
}