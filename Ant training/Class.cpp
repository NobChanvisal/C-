#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
class Student{
	private:
		string name,sex,fb;
	public: 
		void input(){
		cout<< "Enter name    : ";getline(cin,name);
		fflush(stdin);
		cout<< "Enter gender  : ";cin>>sex;
		fflush(stdin);
		cout<< "Enter Facebook: ";getline(cin,fb);
		fflush(stdin);
	}
	
		void output(){
		cout<< "------------------------------------" <<endl;
		cout<< "Name          : "<<name <<endl;
		cout<< "Gender        : "<<sex <<endl;;
		cout<< "Facebook      : "<<fb  <<endl;;
		cout<< "------------------------------------" <<endl;
	}
};
class Teacher{
	private:
		string name, sex, email;
		double salary;
	public:
		void input(){
		cout<< "Enter name    : ";getline(cin,name);
		fflush(stdin);
		cout<< "Enter gender  : ";cin>>sex;
		fflush(stdin);
		cout<< "Enter email: ";getline(cin,email);
		fflush(stdin);
		cout<< "Enter Salary: ";cin>>salary;
		fflush(stdin);
	}
	
		void output(){
		cout<< "------------------------------------" <<endl;
		cout<< "Name          : "<<name <<endl;
		cout<< "Gender        : "<<sex <<endl;
		cout<< "Email         : "<<email  <<endl;
		cout<< "Salary        : "<<salary <<endl;
		cout<< "------------------------------------" <<endl;
	}
};
int main(){
	char menu;
	Student stu;
	Teacher tea;
	start:
	cout<< "School Management System " << endl;
	cout<< "_________________________" << endl <<endl;
	cout<< "1. Student               " << endl;
	cout<< "2. Teacher               " << endl;
	cout<< "3. Exit                  " << endl;
	cout<< "-------------------------" << endl;
	cout<< "choose : ";cin>>menu;fflush(stdin);
	
	switch(menu){ 
			case'1': 					 
					 stu.input();
					 stu.output();
					 getch();
					 system("cls");
					 goto start;
			case'2': 
					 tea.input();
					 tea.output();
					 
			case'3':
				return 0;
			default:
					cout<< "Invalid Menu";
					getch();
					system("cls");
					goto start;
	}
}