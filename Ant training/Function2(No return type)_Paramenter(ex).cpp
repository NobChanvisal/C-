#include <iostream>
#include <stdlib.h>

using namespace std;
void line(int n, string style){
	for(int i = 1; i<=n; i++){
		cout<< " "<<style;
	}
}
int main(){
	unsigned int n;
	cout<< "Enter n: ";cin>>n;fflush(stdin);
	line(n,"-");
}
/*
void egg(int r, int c){
	for(int i = 1; i<=r; i++){
		for(int j = 1; j<=c; j++){
			cout << " 0";
		}
		cout<< endl;
	}
}
int main(){
	egg(3,3);
	cout<<endl;
	egg(2,5);
	cout<< endl;
	egg(3,6);
}
*/

/*
void egg(int r, int c, string style){
	for(int i = 1; i<=r; i++){
		for(int j = 1; j<=c; j++){
			cout << " "<<style;
		}
		cout<< endl;
	}
}
int main(){
	egg(3,3,"0");
	cout<<endl;
	egg(2,5,"$");
	cout<< endl;
	egg(3,6,"+");
}*/
