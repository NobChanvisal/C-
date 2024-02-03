#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;
void smika(int a, int b, int c, float &x1,float &x2){
	float delta;
	delta = b*b - 4*a*c;
	if(delta>=0){
		x1 = (-b+sqrt(delta))/2*a;
		x2 = (-b-sqrt(delta))/2*a;
	}	
	else{
		cout<< "Roots is complex number"<<endl;
	}	
}
int main(){
	int a,b,c;
	float anx1, anx2;
	cout<< "Enter a: ";cin>>a;fflush(stdin);
	cout<< "Enter b: ";cin>>b;fflush(stdin);
	cout<< "Enter c: ";cin>>c;fflush(stdin);
	smika(a,b,c,anx1,anx2);
	cout<< "Root of x1 = "<<anx1<<endl;
	cout<< "Root of x2 = "<<anx2<<endl;
}