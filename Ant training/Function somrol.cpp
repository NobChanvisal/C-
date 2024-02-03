#include <iostream>
#include <stdlib.h>

using namespace std;
void somrol(int a, int b, int &x, int &y){
	int i,small,ppcm;
	if(a<b){
		small = a;
	}
	else 
	{
		small = b;
	}
	for(i = 1; i<= small; i++){
		if(a % i == 0 && b % i == 0){
			ppcm = i;
		}
	}
	x = a/ppcm;
	y = b/ppcm;
}
int main(){
	int anA, anB;
	somrol(4,8,anA,anB);
	cout<<anA << "/"<< anB;
}