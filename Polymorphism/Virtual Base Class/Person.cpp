#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Persons{
    private:
        int id;
        char name[20];
    public:
        Persons(int i = 0, char *na = "Defual"): id(0){strcpy(name,na);}
        virtual void ownInput() {}
        virtual void ownOutput(){}
        void input(){
            cout<< "Enter Id   : ";cin>>id;
            cout<< "Enter Name : ";fflush(stdin);cin.get(name,20);
            ownInput();
        }
        void output(){
            cout<< id << "\t" << name;
            ownOutput();
            cout<< endl;
        }
        virtual float income(){return 0;}
};
class SalaryIncome:public virtual Persons{
    private:
        float salary;
    public:
        SalaryIncome(int i = 0, char *na = "Defual", float sa = 0): Persons(i,na), salary(sa){}
        virtual void ownInput(){
            cout<< "Enter Salary : ";cin>>salary;
        }
        virtual void ownOutput(){
            cout<< "\t"<< salary <<"\t"<< SalaryIncome::income();
        }
        virtual float income(){return salary *(1-0.05);}
};
class WageIncome:public virtual Persons{
    private:
        float hour, rate;
    public:
        WageIncome(int i = 0, char *na = "Defual", float h = 0, float r = 0): Persons(i,na),hour(h),rate(r){}
        virtual void ownInput(){
            cout<< "Enter Hour : ";cin>>hour;
            cout<< "Enter Rate : ";cin>>rate;
        }
        virtual void ownOutput(){
            cout<< "\t"<<WageIncome::income();
        }
        virtual float income(){return hour * rate;}
};
class Salary_Wage_Income:public SalaryIncome,public WageIncome{
    public:
        Salary_Wage_Income(int i = 0,char *na = "Defual",float s = 0, float h = 0, float r = 0):
            Persons(i,na),SalaryIncome(i,na,s),WageIncome(i,na,h,r){}
        virtual void ownInput(){
            Persons::ownInput();
            SalaryIncome::ownInput();
            WageIncome::ownInput();
        }
        virtual void ownOutput(){
            Persons::ownOutput();
            SalaryIncome::ownOutput();
            WageIncome::ownOutput();
            cout<< "\t"<< Salary_Wage_Income::income();
        }
        virtual float income(){
            return SalaryIncome::income() + WageIncome::income();
        }
};
int main(){
    Persons *a[4] = {
        new Persons(1,"Visal"),
        new SalaryIncome(2,"Dara",150),
        new WageIncome(3,"Chanvisal",2,3),
        new Salary_Wage_Income(3,"Neath",150,2,3)
    };
    for(int i = 0; i<4; i++)
        a[i] ->output();
    getchar();
}


