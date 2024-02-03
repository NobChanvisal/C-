#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main(){
	unsigned int i,j,n;
	cout << "Enter number of student: ";cin>>n;
	fflush(stdin);
	cout<< endl;
	
	string stu[n][4];
	/*
	cin>> stu[0][0];
	cin>> stu[0][1];
	cin>> stu[0][2];
	cin>> stu[0][3];
	
	cin>> stu[1][0];
	cin>> stu[1][1];
	cin>> stu[1][2];
	cin>> stu[1][3];
	*/
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<4; j++)
		{
			switch(j){
				case 0: cout<< "Enter name : ";getline(cin, stu[i][j]);
						//fflush(stdin);
						break;
				case 1: cout<< "Enter sex  : ";cin>>stu[i][j];
						//fflush(stdin);
						break;
				case 2: cout<< "Enter phone: ";cin>>stu[i][j];
						//fflush(stdin);
						break;
				case 3: cout<< "Enter mail : ";cin>>stu[i][j];
						//fflush(stdin);
						break;
			}
			fflush(stdin);
		}
		cout<< endl<<endl;
	}
		
}