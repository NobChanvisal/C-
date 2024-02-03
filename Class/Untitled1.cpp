#include <iostream>

using namespace std;
int main(){
	int a,b;
	cout<< "a = ";cin>>a;
	cout<< "b = ";cin>>b;
	do{
		if(a>b)
			a = a - b;
		else
			b = b - a;
	}while(a != b);
	cout<< a;
}