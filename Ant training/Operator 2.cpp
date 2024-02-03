#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){/*
	int a;
	a=pow(2, 3);
	cout << a <<endl;
	cout << pow(2, 3);*/
	int x,y,a;
	float b,c;
	cout<<"Calculate Power" <<endl;
	cout<<"__________________"<<endl;
	cout<<"Enter x: ";cin>>x;fflush(stdin);
	cout<<"Enter y: ";cin>>y;fflush(stdin);
	cout<<"------------------"<<endl;
		a=pow(x,y);
		b=sqrt(y);  //squre Root
		c=cbrt(x); //cube Root
	cout<<"Answer of "<<x<<" ^ "<<y<<" = "<<a <<endl;
	cout<<"Answer of square Root y is "<<b<<endl;
	cout<<"Answer of cube Root x is "<<c;
	getch();
}