#include <iostream>
#include <cstring>
#include <conio.h>
#include <stdlib.h>

using namespace std;
class Product{
    private:
        int code;
        char name[20];
        float price;
    public:
        Product(int c = 123, char *n = "abc", float pr = 150){
            code = c;
            strcpy(name,n);
            price = pr;
        }
        friend ostream& operator<< (ostream &os, Product &p);
        friend istream& operator>> (istream &is, Product &p);
        int operator> (Product p);
        float operator+ (float x);
};
istream& operator>> (istream &is , Product &p){
    cout<<"Enter Code : ";is>>p.code;
    cout<<"Enter Name : ";fflush(stdin);is.get(p.name,20);
    cout<<"Enter Price: ";is>>p.price;
        return is;
 }
 ostream& operator<< (ostream &os , Product &p){
    os<<p.code << "\t"<< p.name << "\t"<< p.price<< endl;
            return os;
}
int Product::operator> (Product p){
            return(price > p.price);
        }
float Product::operator+ (float x){
    return price + x;
}
float total(Product a[],int n){
    float s = 0;
    for(int i= 0; i<n; i++) s = a[i] + s;
    return s;
}
void sort(Product a[], int n){
    Product temp;
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
void inputAll(Product a[], int n){
    for(int i = 0; i<n; i++){
        cout<< endl<< "\tProduct : "<< i+1 << endl;
        cin>>a[i];
    }
}
void outputAll(Product a[], int n){
    for(int i = 0; i<n; i++){
        cout<<a[i];
    }
}
int main(){
    system("cls");
    int n;
    Product a[100],p1(1,"Visal",100), p;
    cout<< "Enter the number of Product: ";
    cin>>n;
    cout<< "_______________________________"<< endl<< endl;
    cout<< "Enter the value of Product: "<<endl;
    cout<< "-------------------------------"<< endl;
    inputAll(a,n);
    cout<<endl<< "Output the value of Product: "<< endl;
    cout<< "-------------------------------"<< endl;
    outputAll(a,n);
    sort(a,n);
    cout<<endl<< "Output the value after sorte: "<< endl;
    cout<< "-------------------------------"<< endl;
    outputAll(a,n);
    cout<<endl<< "Total the value : "<<total(a,n)<<endl;
   
}