#include <iostream>

using namespace std;
int main(){
	string fruits = "apple,arange,mango,grape,";
	string arr[5];
	string temp = "";
	int indexArr = 0;
	for(int i = 0; i < fruits.length(); i++){
		if(fruits[i] != ','){
			temp += fruits[i];
		}
		else
		{
			arr[indexArr] = temp;
			indexArr++;
			temp = "";
		}
	}
	cout<< arr[0]<< " - "<< arr[1];
}