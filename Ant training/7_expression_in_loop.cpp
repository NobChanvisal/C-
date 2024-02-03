#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main(){
	unsigned int i,j,n, sum = 0;//Or: sum = {}
	char op,ch;
	test:
		system("cls");
		cout<< endl<<endl;
		cout<< "\n\t  --)Expression in loop(--"<<endl;
		cout<< "\t---------------------------------"<<endl;
		cout<< "\tPlese chose one option--)"<<endl;
		cout<< "\t a.2 + 4 + 8 + 16 + 32 +.......= "<<endl;
		cout<< "\t b.(1*1) + (2*2) + (3*3)+......= "<<endl;
		cout<< "\t c.(1) + (1+2) + (1+2+3)+.....= "<<endl;
		cout<< "\t d.exit                          "<<endl;
		cout<< "\t_________________________________"<<endl;
		op=getch();
		switch(op){
			case'a':
			case'A': system("cls");
					 cout<< "\n\t  --)Expression in loop(--"<<endl;
					 cout<< "\t____________________________________"<<endl<<endl;
					 cout<< "\tEnter n:";cin>>n;fflush(stdin);
	    			 cout<< "\t____________________________________"<<endl;
	            	 cout<< "\tAnswer = ";
						for(i=1; i<=n; i++){
							sum += pow(2,i);
							cout<< pow(2,i) << " + ";
							}
						cout<<"\b\b\b = "<< sum;
						break;	
				 
			case'b':
			case'B': system("cls");
					 cout<< "\n\t  --)Expression in loop(--"<<endl;
					 cout<< "\t-----------------------------------"<<endl;
				   	 cout<< "\tEnter n: ";cin>>n;fflush(stdin);
					 cout<< "\t___________________________________"<<endl;
					 cout<< "\tAnswer = ";
						for(i=1; i<=n; i++){
							sum += i*i;
							cout<<"("<< i << " * " <<i << ")"<< " + ";
							}
						cout<< "\b\b\b = "<< sum;
						break;
			case'c':
			case'C': system("cls");
					 cout<< "\n\t  --)Expression in loop(--"<<endl;
					 cout<< "\t-----------------------------------"<<endl;
					 cout<< "\tEnter n: ";cin>>n;fflush(stdin);
					 cout<< "\t___________________________________"<<endl;
					 cout<< "\tAnswer = ";
						for(i = 1; i<=n; i++)
						{
							cout<< "( ";
							for(j = 1; j<=i; j++)
							{
								sum += j;
							cout<< j << " + ";
							}
							cout<< "\b\b\b ) + ";
							}
							cout<< "\b\b\b = "<< sum << endl;		
					 break;
			case'd':
			case'D': return 0;
			default: system("cls");
					 cout<< "\t---------------------------"<<endl;
					 cout<< "\t    Don't have option :)   "<<endl;
					 cout<< "\t    Plese try again!!!     "<<endl;
					 cout<< "\t___________________________"<<endl;
					 getch();
					 goto test;
	}
	cout<< endl;
	cout<< "\n\tPress enter if you want to start again :("<<endl;
	ch=getch();
	if(ch==13)
	goto test;
	return 0;	
}