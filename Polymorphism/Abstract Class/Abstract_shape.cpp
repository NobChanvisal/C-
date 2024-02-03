#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
enum objType {RECTANGLES, CIRCLE, TRIANGLE};
class Shape{
    public:
        virtual void input() = 0;
        virtual void output() = 0;
        virtual float area() = 0;
        virtual objType object() = 0;
};
class Rectangles: public Shape{
    private:
        float l,w;
    public:
        Rectangles(float l1 = 0, float w1 = 0): l(l1), w(w1){};
        virtual void input(){
            cout<< "Enter Length : ";cin>>l;
            cout<< "Enter Width  : ";cin>>w;
        }
        virtual void output(){
            cout<< l << "\t"<< w << "\t"<< area()<<endl;
        }
        virtual float area(){
            return l * w;
        }
        virtual objType object(){return RECTANGLES;}
};
class Circle: public Shape{
    private:
        float r;
    public:
        Circle(float r1 = 0): r(r1){};
        virtual void input(){
            cout<< "Enter R : ";cin>>r;
        }
        virtual void output(){
            cout<< r << "\t"<< area()<< endl;
        }
        virtual float area(){ return 3.14 *r*r;}
        virtual objType object(){return CIRCLE;}
};
class Triangle: public Shape{
    private:
        float a,b,c;
    public:
        Triangle(float a1 = 0, float b1 = 0, float c1 = 0): a(a1), b(b1), c(c1){};
        virtual void input(){
            cout<< "Enter Size 1 : ";cin>>a;
            cout<< "Enter Size 2 : ";cin>>b;
            cout<< "Enter Size 3 : ";cin>>c;
        }
        virtual void output(){
            cout<< a << "\t"<< b << "\t"<< c << "\t"<< area()<< endl;
        }
        virtual float area(){
            float p,s;
            p = (a+b+c)/2;
            s = sqrt(p*(p-a) * (p-b) * (p-c));
            return s;
        }
        virtual objType object(){return TRIANGLE;}
};
float totalArea(Shape *a[], int n){
    float sum = 0;
    for(int i = 0; i<n; i++)    
        sum += a[i] ->area();
    return sum;
}
float totalRec(Shape *a[], int n){
    float sum = 0;
    for(int i = 0; i<n; i++)
        if(a[i]->object() == RECTANGLES)
        sum += a[i]->area();
    return sum;
}
Shape *maxAea(Shape *a[], int n){
    Shape *max = a[0];
    for(int i = 0; i<n; i++)
        if(max->area() < a[i]->area()) max = a[i];
    return max;
}
Shape *maxRec(Shape *a[], int n){
    Shape *max = a[0];
    for(int i = 0; i<n; i++)
        if(a[i]->object() == RECTANGLES){max = a[i]; break;}
    for(int i = 0; i<n; i++)
        if(a[i]->object() == RECTANGLES && max ->area() < a[i]->area()) max = a[i];
    return max;
}
int main(){
    int n;
    char ch;
    Shape *p1, *p2;
    Shape *a[100] = {
        new Rectangles(13,2), new Triangle(13,8,10), 
        new Circle(5), new Triangle(1,1,1), new Rectangles(6,5)
    };
    cout<< "Output of 5 Defaul : "<< endl;
    cout<< "-----------------------------------"<< endl;
    for(int i = 0; i<5; i++){
        a[i] ->output();
    }
    cout<< "Enter number of shape : ";cin>>n;
    for(int i = 0; i<n; i++){
        cout<< "\nOption : 1.Rectangle  2.Circle   3.Triangle   4.Exit"<< endl;
        cout<< "-------------------------------------------"<< endl;
        cout<< "Enter your choise : ";cin>>ch;
        if(ch == '1'){
            a[i] = new Rectangles();
            a[i] ->input();
        }
        else if(ch == '2'){
            cout<< "Enter Data Of Circle: "<< endl;
            cout<< "------------------------------------"<< endl;
            a[i] = new Circle();
            a[i] ->input();
        }
        else if(ch == '3'){
            cout<< "Enter Data Of Triangle: "<< endl;
            cout<< "------------------------------------"<< endl;
            a[i] = new Triangle();
            a[i] ->input();
        }
        else if(ch == '4'){return 0;}
        else{
            cout<< "Not Found !!!"<< endl;
        }
    }
    cout<< endl<< "Output Of Your Data: "<< endl;
    cout<< "------------------------------------"<< endl;
    for(int i = 0; i<n; i++){
        a[i] ->output();
    }
    cout<< endl<< "Total Area  is "<< totalArea(a,n)<< endl;
    p1 = maxAea(a,n);
    cout<< endl<< "Maximum Area of all Shape : "<< endl;
    p1->output();
    cout<< endl<< "Total Area of Rectangle is "<< totalRec(a,n)<< endl;
    p2 = maxRec(a,n);
    cout<< endl<< "Maximum Area of all Shape : "<< endl;
    p2->output();
}