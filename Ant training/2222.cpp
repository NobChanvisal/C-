#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){
	unsigned int i,n,j;
	int sum = 0, sum1 = 0;
	cout<< "\n\t  --)Expression in loop(--"<<endl;
	cout<< "\t-----------------------------------"<<endl;
	cout<< "\tEnter n: ";cin>>n;fflush(stdin);
	cout<< "\t___________________________________"<<endl;
		for(i = 1; i<=n; i++)
			{
			for(j = 1; j<=i; j++)
			sum += j;	
		}	
	cout<< "\tAnswer = (1) + (1+2+3)+...+(1+2+3+..+n) = "<<sum;
}