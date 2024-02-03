#include <iostream>
#include <stdlib.h>

using namespace std;
double pay(int qty, double price, double dis = 0){
	double t = qty* price;
	double s = t * (dis/100);
	return t - s;
}
void test(int a, int &b){
	b = a + 10;
}
int main(){
	//cout<< pay(10, 20);
	int an;
	cout<<test(10,an);
}