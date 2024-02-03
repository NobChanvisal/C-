#include <iostream>
using namespace std;

class Payrolls{
    private:
        int hours;
        float wage;
    public:
        Payrolls(int h = 1, float w = 1):hours(h), wage(w){}
        friend istream& operator>>(istream& is, Payrolls& obj);//overloading insertion:
        friend ostream& operator<<(ostream& out, Payrolls& obj);//overloading extraction:
        double amount(){return hours * wage;}
        operator double();
};

istream& operator>>(istream& is, Payrolls& obj){
    cout<< "Enter Hours : ";obj.hours;
    cout<< "Enter Wage  : ";obj.wage;
    return is;
}
ostream& operator<<(ostream& out, Payrolls& obj){
    cout<< obj.hours<< "\t"<< obj.wage<< "\t"<<obj.amount()<< endl;
    return out;
}
Payrolls::operator double(){return amount();}
void sort(Payrolls pays[],int n){
    Payrolls temp;
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
            if((double)pays[i] > (double)pays[j]){
                temp = pays[i];
                pays[i] = pays[j];
                pays[j] = temp;
            }
}
int main(){
    Payrolls pays[3]= {Payrolls(45,4.5),Payrolls(65,3),Payrolls(25,5.5)};
    for(int i = 0; i<3; i++)
        cout<<pays[i]<<endl;
    sort(pays,3);
    cout<< "After Sorte: "<<endl;
    for(int i = 0; i<3; i++)
       cout <<pays[i];
}
