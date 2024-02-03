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
		Person(){
			this->id = 1;
			strcpy(this->name,"Sal");
			this->sex = 'M';
			this->salary = 2500;
		}
		Person(int i, char *n, char s, float sa){
			this->id = i;
			strcpy(this->name,n);
			this->sex = s;
			this->salary = sa;
		}
		void output(){
			cout<<left;
			cout<<setw(5) <<this->id;
			cout<<setw(30)<<this->name;
			cout<<setw(5) <<this->sex;
			cout<<setw(10)<<this->salary<<endl;
		}
};
int main(){
	Person p1, p2(2,"Visal",'M',3000);
	cout<<"Defualt Constructor p1 : "<<endl;
	cout<<"---------------------------------------"<<endl;
	p1.output();
	cout<<"Constructor With Paramenter p2 :       "<<endl;
	cout<<"---------------------------------------"<<endl;
	p2.output();
	getch();
}