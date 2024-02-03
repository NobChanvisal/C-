#include <iostream>
#include <stdlib.h>

using namespace std;
	/*
	dataype function_name(parameter){
		statements;
		return value;
	}
	*/
	int power(int x, int n){
		int i, a = 1;
		for(i = 1; i<=n; i++){
			a *= 2;
		}
		return a;
	}
	int main(){
		cout<< power(2,4);
	}
	/*
	double total(int qty, int price){
		double answer = qty * price;
		return answer;
	}
	int main(){
		cout<<total(2,5) + 20;
	}*/