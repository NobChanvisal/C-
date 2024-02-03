#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	unsigned int i,n, sum = 0;
	cout<< "Enter n: ";cin>> n;fflush(stdin);
	cout<< "Answer = ";
		for(i = 1; i <= n; i++){
		sum += 2*i;
		cout << 2*i << " + ";
	}
	cout<< "\b\b\b = "<< sum;
}
/*int main(){
	unsigned int i,n, sum = 0;
	cout<< "Enter n: ";cin>> n;fflush(stdin);
	cout<< "Answer = ";
		for(i = 1; i <= n; i++){
		sum += i;
		cout << i << " + ";
	}
	cout<< "\b\b\b = "<< sum;
}*/