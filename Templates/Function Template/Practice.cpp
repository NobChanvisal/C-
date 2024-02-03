#include <iostream>
#include <cstring>

using namespace std;
class Rectangle{
    private:
        float lenght,width;
    public:
        Rectangle(float l = 0, float w = 0):lenght(l),width(w){}
        friend istream& operator>>(istream &is, Rectangle &p){
            cout<< endl;
            cout<< "\tRectangle:"<<endl;
            cout<<"Enter Lenght : ";is>>p.lenght;
            cout<<"Enter Width  : ";is>>p.width;
            cout<< endl;
            return is;
        }
        friend ostream& operator<<(ostream &out, Rectangle &p){
            out<<p.lenght <<"\t"<<p.width << "\t"<<p.area();
            return out;
        }
        double area(){return lenght * width;}
        operator double(){return area();}
};
class Person{
    private:
        int id;
        char name[20];
        char sex;
        float hour;
        int day;
    public:
        Person(int i  = 0, char* na = "N/A", char s = 'M/S', float h = 0, int d = 0);
        friend ostream& operator<<(ostream& out,Person &p);
        friend istream& operator>>(istream& in, Person &p);
        
        double salary(){return hour * day;}
        operator double(){return salary();}
};
Person::Person(int i, char* na, char s, float h, int d):
id(i),sex(s),hour(h),day(d){strcpy(name,na);}
ostream& operator<<(ostream& out, Person &p){
    out<<p.id << "\t"<<p.name<< "\t"<<p.sex<< "\t"<<p.salary();
    return out;
}
istream& operator>>(istream& in, Person &p){
    cout<< endl;
    cout<< "\tPerson:"<<endl;
    cout<< "Enter Id : ";in>>p.id;
    cout<< "Enter Name : ";fflush(stdin);in.get(p.name,20);
    cout<< "Enter Sex  : ";in>>p.sex;
    cout<< "Enter Hour : ";in>>p.hour;
    cout<< "Enter Day  : ";in>>p.day;
    cout<< endl;
    return in;
}

class Product{
	private:
		int code;
		char name[20];
        int qty;
		float price;
	public:
		
		Product(int c = 0, char *n = "coca",int q = 1,float p = 1){
			code = c;
			strcpy(name,n);
            qty   = q;
			price = p;
		}
		friend istream& operator>>(istream& is, Product &obj);
        friend ostream& operator<<(ostream& out, Product &obj);
        double tprice(){return qty * price;}
        operator double();
};
ostream& operator<<(ostream& out, Product &obj){
    out<< obj.code<<"\t";
    out<< obj.name<< "\t";
    out<<obj.qty<< "\t";
    out<<obj.price<<"\t";
    out<<obj.tprice();
    return out;
}
istream& operator>>(istream& is, Product &obj){
    cout<< endl;
    cout<< "\tProduct:"<<endl;
    cout<< "Enter Code : ";is>>obj.code;
    cout<< "Enter Name : ";fflush(stdin);is.get(obj.name,20);
    cout<< "Enter QTY  : ";is>>obj.qty;
    cout<< "Enter Price: ";is>>obj.price;
    cout<< endl;
    return is;
}

Product::operator double(){return tprice();}

template <class T>
void input(T a[],int n){
    int i;
    cout<< "Enter Data:"<<endl;
    cout<< "-----------------------------------"<< endl;
    for(i = 0; i<n; i++){
        cout<< "Enter element "<< i + 1<<":";cin>>a[i]; 
    }         
}
template <class T>
void output(T a[],int n){
    for(int i = 0; i<n; i++)
        cout<< a[i]<< endl;
}
template <class T>
double sumArray(T a[], int n){
    double sum = 0;
    for(int i = 0; i<n; i++)
        sum += a[i];
    return sum;
}
template <class T>
T maximum(T a[], int n){
    T max = a[0];
    for(int i = 0; i<n; i++){
        if(a[i] > max) max = a[i];
    }   return max; 
}
template <class T2>
void sort(T2 a[], int n){
    T2 temp;
    for(int i = 0; i<n-1; i++)
        for(int j = i; j<n; j++)
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int main(){
    system("cls");
    int int_arr[20];
    input(int_arr,5);
    cout<< "All Integer:"<<endl;output(int_arr,5);
    //Rectangle
    Rectangle rec[20];
    input(rec,2);
    cout<< "\nAll Rectangle:"<<endl;
    cout<< "----------------------------"<<endl;
    output(rec,2);
    cout<< "\nSum area of Rectangle :"<< sumArray(rec,2);
    cout<< "\nMax area of Rectangle :"<< maximum(rec,2);
    sort(rec,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    cout<< "----------------------------"<<endl;
    output(rec,2);
    //Product:
    Product pro[20];
    input(pro,2);
    cout<< "\nAll Product: "<< endl;
    cout<< "----------------------------"<<endl;
    output(pro,2);
    cout<< "\nSum Price of All Product : "<< sumArray(pro,2);
    cout<< "\nMax Price of All Product : "<< maximum(pro,2);
    sort(pro,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    cout<< "----------------------------"<<endl;
    output(pro,2); 
    //Person:
    Person per[2];
    input(per,2);
    cout<< "\nAll Person: "<< endl;
    cout<< "----------------------------"<<endl;
    output(per,2);
    cout<< "\nSum Salary of All Person : "<< sumArray(per,2);
    cout<< "\nMax Salary of All Person : "<< maximum(per,2);
    sort(per,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    cout<< "----------------------------"<<endl;
    output(per,2);
    /*
    int int_a[3] = {1,3,2};
    float float_a[3] = {1.1,3.1,2.1};
    cout<< "\nOutput of integer: "<< endl;output(int_a,3);
    cout<< "\nSum of integer     : "<< sumArray(int_a,3);
    cout<< "\nMaximum of integer : "<< maximum(int_a,3);
    cout<< "\nSum of Flaot       : "<< sumArray(float_a,3);
    cout<< "\nMaximum of float   : "<< maximum(float_a,3);
    sort(int_a,3);
    cout<<endl<< "Output of integer After sorted: "<< endl;output(int_a,3);
    //Rectangle:
    Rectangle rec[2] = {Rectangle(2,3),Rectangle(3,4)};
    cout<< "\nAll Rectangle: "<<endl;
    output(rec,2);
    cout<< "\nSum area of Rectangle :"<< sumArray(rec,2);
    cout<< "\nMax area of Rectangle :"<< maximum(rec,2);
    sort(rec,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    output(rec,2); 
    //Product:
    Product pro[2] = {Product(1,"Fanta",2,1),Product(2,"Sting",4,1)};

    cout<< "\nAll Product: "<< endl;
    output(pro,2);
    cout<< "\nSum Price of All Product : "<< sumArray(pro,2);
    cout<< "\nMax Price of All Product : "<< maximum(pro,2);
    sort(pro,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    output(pro,2); 
    //Person:
    Person per[2] = {Person(1,"Ronaldo",'M',8,30),Person(2,"Messi",'M',8,30)};
    cout<< "\nAll Person: "<< endl;
    output(per,2);
    cout<< "\nSum Salary of All Person : "<< sumArray(per,2);
    cout<< "\nMax Salary of All Person : "<< maximum(per,2);
    sort(per,2);
    cout<<endl<< "\nAfter Sorted: "<<endl;
    output(per,2); 
    */
}