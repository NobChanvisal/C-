#include <iostream>

using namespace std;
int main(){
	unsigned int i,sum = 0;
	cout<< "Answer = ";
	for(i = 1; i <= 5; i++){
		sum += 2;
		/*if(i == 5){
			cout<< "3 ";
		}
		else{
			cout<< "3+ ";	
		}*/
		//or
		cout << "3 + ";
	}
	cout<< "\b\b";
	cout<< " = " << sum;
}
