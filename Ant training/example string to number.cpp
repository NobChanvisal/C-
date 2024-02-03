#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){
	string a = "12";
	string b = "10";

	//cout<< a * b; is error
	cout<< stod(a) * stod(b);
}