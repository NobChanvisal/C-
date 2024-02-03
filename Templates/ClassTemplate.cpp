#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Rectangle{
    private:
        float lenght;
        float width;
    public:
        Rectangle(float l = 1, float w = 1);
        friend istream& operator>>(istream& in, Rectangle &obj);
        friend ostream& operator<<(ostream& out, Rectangle &obj);
        float area(){return lenght * width;}
        operator float();
};
Rectangle::Rectangle(float l, float w):lenght(l),width(w){}
istream& operator>>(istream& in, Rectangle &obj){
    cout<< endl<<"\tRectangle:"<<endl;
    cout<< "Enter Lenght : ";in>>obj.lenght;
    cout<< "Enter Width  : ";in>>obj.width;
    return in;
}
ostream& operator<<(ostream& out, Rectangle &obj){
    out<< obj.lenght<< "\t"<< obj.width<< "\t"<< obj.area();
    return out;
}
Rectangle::operator float(){return area();}

class Person{
    private:
        int id;
        char name[20];
        char sex;
        float salary;
        float rate = 0.01;
    public:
        Person(int i = 0, char* na = "N/A",char s = 'M', float sa = 500);
        friend istream& operator>>(istream& in, Person &obj);
        friend ostream& operator<<(ostream& out, Person &obj);
        float tsalary(){return salary - (salary * rate);}
        operator float();
};
Person::Person(int i,char* na,char s,float sa):id(i),sex(s),salary(sa){strcpy(name,na);}
istream& operator>>(istream& in, Person &obj){
    cout<< endl<<"\tPerson:"<<endl;
    cout<< "Enter Id : ";in>>obj.id;
    cout<< "Enter Name : ";fflush(stdin);in.get(obj.name,20);
    cout<< "Enter Sex  : ";in>>obj.sex;
    cout<< "Enter Salary : ";in>>obj.salary;
    return in;
}
ostream& operator<<(ostream& out, Person &obj){
    out<<obj.id<< "\t"<<obj.name<< "\t"<<obj.sex<< "\t"<<obj.tsalary();
    return out;
}
Person::operator float(){return tsalary();}

template<class T>
class Show{
    private:
        T x;
        T y;
    public:
        void input();
        void output();
        float sum(){return (x+y);}
};
template<class T>
void Show<T>::input(){
    cout<< "Enter x : ";cin>>x;
    cout<< "Enter y : ";cin>>y;
}
template<class T>
void Show<T>::output(){
    cout<< "x = "<<x<<"\ty = "<<y<< "\tSum = "<<sum()<< endl;
}
int main(){
    Show<int>obj1; obj1.input(); obj1.output();
    Show<float>obj2; obj2.input(); obj2.output();
    Show<Rectangle>obj3; obj3.input(); obj3.output();
    Show<Person>obj4; obj4.input(); obj4.output();
}