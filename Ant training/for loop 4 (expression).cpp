#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main(){
	unsigned int i,n,sum=0;
	cout<< endl;
	cout<< "\n\t  --)Expression in loop(--"<<endl;
	cout<< "\t____________________________________"<<endl<<endl;
	cout<< "\tEnter n:";cin>>n;
	cout<< "\t____________________________________"<<endl;
	cout<< "\tAnswer = ";
		for(i=1; i<=n; i++)
		{
			sum += pow(2,i);
			cout<< pow(2,i) << " + ";
		}
	cout<<"\b\b\b = "<< sum;
}