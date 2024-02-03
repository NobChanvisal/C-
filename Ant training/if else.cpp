#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int score;
	cout<< "Input score: ";fflush(stdin);cin>>score;
	if(score >= 50){
		cout<< "Pass" <<endl;
	}
	else {
		cout<< "Fale"<<endl;
	}
	cout<<"Thank You!" <<endl;
}