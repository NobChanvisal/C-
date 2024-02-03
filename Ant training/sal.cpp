#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	float eng,kh,c,avg;
	char g;
	cout<< "Input english      : ";cin>>eng;
	cout<< "Input Khmer        : ";cin>>kh;
	cout<< "Input c programing : ";cin>>c;
		avg = (eng+kh+c)/3;
			if(avg>=150)
				if(avg>=200)
					if(avg>=250)
						g='A';
					else
						g='B';
				else
					g='C';
			else
				g='D';
	cout<< "__________________________"<<endl;
	cout<< "Your Everage : "<< avg<<endl;
	cout<< "Your Grand   : "<< g<<endl;
	cout<< "--------------------------";
	getch();
}