#include <iostream>
#include <string >
#include <sstream>

using namespace std;
int main(){
	double a = 1.2;
	stringstream temp;
	temp << a;
	cout<< temp.str() + "$"<<endl;
	
	double a = 1.2;
	cout<< to_string(a) + "$";
}