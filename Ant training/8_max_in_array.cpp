#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int i,n,max;
	cout<< endl<<endl;
	cout<< "\t(+) Find Max Number In Array (-)"<<endl;
	cout<< "\t--------------------------------"<<endl;
	cout<< "\tEnter n: ";cin>>n;fflush(stdin);
	cout<< "\t________________________________"<<endl;		
	int num[n];
	for(i = 0; i<n; i++){
			cout<< "\tNumber["<<i <<"]:";cin>>num[i];
			fflush(stdin);
		}
	max = num[0];
	for(i = 0; i<n; i++){
		if(max < num[i])
		max = num[i];
			}
	cout<< "\t================================"<<endl;
	cout<< "\tSo that max = "<<max;			
	getch();
	return 0;		
}
/*
int main(){
		unsigned int i,n,max;
	cout<< endl<<endl;
	cout<< "\t(+) Find Max Number In Array (-)"<<endl;
	cout<< "\t--------------------------------"<<endl;
	cout<< "\tEnter n: ";cin>>n;fflush(stdin);
	cout<< "\t________________________________"<<endl;		
	int num[n];
	for(i = 0; i<n; i++){
			cout<< "\tNumber["<<i <<"]:";cin>>num[i];
			fflush(stdin);
		}
	max = num[0];
	for(i = 0; i<n; i++){
		if(max < num[i]){
			max = num[i];
		}
		if(min > num[i]){
			min = num[i];
		}
	}
	cout<< "\t================================"<<endl;
	cout<< "\tSo that min = "<<min;			
	getch();
	return 0;
}*/