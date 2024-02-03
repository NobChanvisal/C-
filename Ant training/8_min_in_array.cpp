#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int i,n,min;
	cout<< endl<<endl;
	cout<< "\t(+) Find Min Number In Array (-)"<<endl;
	cout<< "\t--------------------------------"<<endl;
	cout<< "\tEnter n: ";cin>>n;fflush(stdin);
	cout<< "\t________________________________"<<endl;		
	int num[n];
	for(i = 0; i<n; i++){
			cout<< "\tNumber["<<i <<"]:";cin>>num[i];
			fflush(stdin);
		}
	min = num[0];
	for(i = 0; i<n; i++){
		if(min > num[i])
		min = num[i];
			}
	cout<< "\t================================"<<endl;
	cout<< "\tSo that Min = "<<min;			
	getch();
	return 0;		
}