#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Person{
	protected:
		string name, gender;
		void inputName(){
			cout<< "Enter Name   : ";getline(cin, this->name);
			fflush(stdin);
		}
		void inputGender(){
			cout<< "Enter Gender : ";getline(cin, this->gender);
			fflush(stdin);
		}
		void outputName(){
			cout<< left <<setw(20)<< name;
		}
		void outputGender(){
			cout<< left<< setw(8)<< gender;
		}
};
class Student: public Person{
	private:
		string ph;
		void inputPhone(){
			cout<< "Enter Phone  : ";getline(cin, this->ph);
			fflush(stdin);
		}
		void outputPhone(){
			cout<< left<< setw(20)<< ph;
		}
	public:
		void input(){
			
			this->inputName();
			this->inputGender();
			this->inputPhone();
		}
		void output(){
			this->outputName();
			this->outputGender();
			this->outputPhone();
		}
};
class Teacher: public Person{
	private:
		string email;
		void inputEmail(){
			cout<< "Enter Email  : ";getline(cin,this->email);
			fflush(stdin);
		}
		void outputEmail(){
			cout<< left<< setw(20)<< email;
		}
	public:
		void input(){
			this->inputName();
			this->inputGender();
			this->inputEmail();
		}
		void output(){
			this->outputName();
			this->outputGender();
			this->outputEmail();
		}
};

int main(){
	Student stu;
	Teacher tea;
	stu.input();
	stu.output();
	
	
}