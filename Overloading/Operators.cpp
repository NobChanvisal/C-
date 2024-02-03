#include <iostream>
#include <conio.h>
#include <cstring>
#include <windows.h>
#include <stdlib.h>

using namespace std;
class Person{
    private:
        int id;
        char name[20];
        char sex;
        float salary;
    public:
        Person(int i, char *n, char se, float sa){
            id = i;
            strcpy(name,n);
            sex = se;
            salary = sa;
        }
        void input(){
            cout<< "Enter Id     : ";cin>>id;
            cout<< "Enter Name   : ";fflush(stdin);cin.get(name,20);
            cout<< "Enter Sex    : ";cin>>sex;
            cout<< "Enter Salary : ";cin>>salary;
        }
        void output(){
            cout<< "\t"<<id<<"\t"<<name<<"\t"<<sex<< "\t"<<salary<<endl;
        }
        Person operator+= (float s){
            salary += s;
            return *this;
        }
        Person operator+ (float sala){
            float sum;
            sum = salary + sala;
            return *this;
        }
        void operator= (Person &p){
            salary = p.salary;
        }
        int operator>(Person p){//Overloadin for: Compare object with object:
            return (salary > p.salary);
        }
        int operator>(float s){//Overloadin for: Compare object with float:
            return (salary > s);
        }
        //Overloadin for: Compare float with object:
        friend int operator>(float s1, Person p){//500 តួរទី​​​1មិនមែនជា object ដាច់ខាតត្រូវតែប្រែfriend function
            return (s1 > p.salary);
        }
};
int main(){
   // system("cls");
    Person p1(1,"Visal",'M',1500),p2(2,"Dara",'M',1000);
    cout<< "Person 1 Before : "<<endl;p1.output();
    cout<< "Person 2        :"<< endl;p2.output();
    p1 +=50; //បើអត់ធ្វើ Overloading នោះយើងមិនអាច + តម្លៃអោយវាបានទេ 
    cout<< "Person 1 After  : "<<endl;p1.output();
    //Compare object with object(អាច compare ទៅមកបាន p1>p2 or p2>p1):
    if(p1 > p2) cout<< "Salary of p1 > p2"<<endl;
    else cout<< "Salary of p1 < p2"<< endl;
    //Compare object with float:
    if(p1 > 900.0) cout<< "Salary of p1 > 900$"<<endl;
    else cout<< "Salary of p1 < 900$"<< endl;
    //Compare float with object:
    if(500.0 > p1) cout<< "Salary of 500$ > p1"<<endl;
    else cout<< "Salary of 500$ < p1"<< endl;  
    getchar();
}