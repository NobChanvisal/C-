#include <iostream>
#include <conio.h>

using namespace std;

void input(float a[], int n){
	for(int i = 0; i<n; i++){
		cout<< "Elenment "<<(i + 1)<< ": ";
		cin>>a[i];
	}		
}
void output(float a[], int n){
	for(int i = 0; i<n; i++)
		cout<< "Value of element "<<i+1<<" is "<<a[i]<<endl;
}
float sum(float a[],int n){
	float sum = 0;
	for(int i = 0; i<n; i++)
		sum += a[i];
	return sum;
}
float max(float a[],int n){
	float max =a[0];
	for(int i = 0; i<n; i++)
		if(a[i]>max) max = a[i];	
			return max;		
}
void sort(float a[],int n){
	float temp;
	for(int i = 0; i<n-1; i++)
		for(int j = i + 1; j<n; j++)
		if(a[i]>a[j]){ //up(small to big)
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
int search(float a[],int n, float s){
	int index = -1;
	for(int i = 0; i<n; i++)
		if(s == a[i]){
			index = i;
			break;
		}
		return index;
}
int main(){
	float x[120],s1,sData;
	int n,pos;
	cout<< "Number all element: ";cin>>n;
	cout<< "Input of elenment: "<<endl;
	cout<< "----------------------------"<<endl;
	input(x,n);
	
	cout<< "\nOutput of element: "<<endl;
	cout<< "----------------------------"<<endl;
	output(x,n);
	cout<< "----------------------------"<<endl;
//	s1 = sum(x,n);
	cout<< "\nOutput after sum is : "<<sum(x,n)<<endl;
	cout<< "\nMaximum of all element is : "<<max(x,n)<<endl;
	
	cout<< "\nOutput before sort: "<<endl;
	cout<< "----------------------------"<<endl;
	sort(x,n);
	output(x,n);
	cout<< "----------------------------"<<endl;
	cout<< "Enter data to search: ";cin>>sData;
	pos = search(x,n,sData);
	if(pos == -1) 
		cout<< "Search not found!!"<<endl;
	else
		x[pos] += 10;
	cout<< "----------------------------"<<endl;
	cout<< "\nOutput After Update: "<<endl;
	cout<< "----------------------------"<<endl;
	output(x,n);
	getch();
}