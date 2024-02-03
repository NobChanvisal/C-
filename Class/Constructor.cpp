#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Person{
	private:
		int id;
		char name[30];
		char sex;
		float salary;
	public:
		Person(){//Default Constructor
			id = 1;
			strcpy(name,"sal");
			sex = 'M';
			salary = 500;
		}
		Person(int i, char *n, char s, float sa){//Constructor with paramenter
			id = i;
			strcpy(name,n);
			sex = s;
			salary = sa;
		}
		Person(Person &p){//Copy Constructor 
			id = p.id;
			strcpy(name,p.name);
			sex = p.sex;
			salary = p.salary;
		}
		void output(){
			cout<< left;
			cout<< setw(10)<<id;
			cout<< setw(30)<<name;
			cout<< setw(10)<<sex;
			cout<< setw(10)<<salary<<endl;
		}
};
int main(){
	Person p1, p2(2,"Visal",'M',2500),p3(p2);
	cout<< "Default Constructor p1 : "<<endl;
	cout<< "--------------------------------------"<<endl;
	p1.output();
	cout<<endl<< "Constructor With Paramenter p2 : "<<endl;
	cout<< "--------------------------------------"<<endl;
	p2.output();
	cout<<endl<< "Copy Constructor p3 : "<<endl;
	cout<< "--------------------------------------"<<endl;
	p3.output();
	getch();
}