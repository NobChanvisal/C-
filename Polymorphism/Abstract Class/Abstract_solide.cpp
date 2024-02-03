#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstring>
#include <windows.h>
#include <stdlib.h>

using namespace std;
enum objType{RECTANGULAR, CYLINDER,SPHERE};
class Solide{
    public:
        virtual void input() = 0;
        virtual void output() = 0;
        virtual float volume() = 0;
        virtual objType obj() = 0;
};
class Rectangular: public Solide{
    private:
        float l,w,h;
    public:
        Rectangular(float l1 = 0, float w1 = 0, float h1 = 0){l = l1, w = w1, h = h1;}
        virtual void input(){
            cout<< "Enter Lenght : ";cin>>l;
            cout<< "Enter Width  : ";cin>>w;
            cout<< "Enter Hight  : ";cin>>h;
        }
        virtual void output(){
            cout<< l<< "\t"<< w<< "\t"<< h<< "\t"<< volume()<< endl;
        }
        virtual float volume(){ return l*w*h; }
        virtual objType obj(){return RECTANGULAR;}
};
class Cylinder: public Solide{
    private:
        float r,h;
    public:
        Cylinder(float r1 = 0,float h1 = 0){r = r1, h = h1;}
        virtual void input(){
            cout<< "Enter R      : ";cin>>r;
            cout<< "Enter Hight  : ";cin>>h;
        }
        virtual void output(){
            cout<< r<< "\t"<< h<< "\t"<< volume()<< endl;
        }
        virtual float volume(){ return 3.14*r*r*h; }
        virtual objType obj(){return CYLINDER;}
};
class Sphere: public Solide{
    private:
        float r,h;
    public:
        Sphere(float r1 = 0){r = r1;}
        virtual void input(){
            cout<< "Enter R      : ";cin>>r;
        }
        virtual void output(){
            cout<< r<< "\t"<< volume()<< endl;
        }
        virtual float volume(){ return 4/3*3.14*r*r*r; }
        virtual objType obj(){return SPHERE;}
};
float sumVolume(Solide *a[], int n){
    float sum = 0;
    for(int i = 0; i<n; i++)
        sum += a[i]->volume();
    return sum;
}
float sumSphere(Solide *a[], int n){
    float sum = 0;
    for(int i = 0; i<n; i++){
        if(a[i]->obj()==SPHERE)
        sum += a[i] ->volume();
    }
    return sum;
}
Solide *maxVolume(Solide *a[], int n){
    Solide *max = a[0];
    for(int i = 0; i<n; i++)
        if(max ->volume() < a[i] -> volume()) max = a[i];
    return max;
}
Solide *maxSphere(Solide *a[], int n){
    Solide *max = a[0];
   // for(int i = 0; i<n; i++)
   //     if(a[i] ->obj() == SPHERE){max = a[i];break;}
    for(int i = 0; i<n; i++)
        if(a[i] ->obj() == SPHERE && max ->volume() < a[i] ->volume()) max = a[i];
    return max;
}
int main(){
    int n;
    Solide *p1,*p2;
    Solide *a[5] = {
        new Rectangular(2,3,5),
        new Cylinder(5,5), new Sphere(2),
        new Cylinder(4,4), new Sphere(3)
    };
    cout<< "Data of all Solid: "<< endl;
    cout<< "___________________________________"<< endl;
    for(int i = 0; i<5; i++){
        a[i] ->output();
    }
    cout<< endl<< "Total Volume Of Solide : "<<sumVolume(a,5)<< endl;
    p1 = maxVolume(a,5);
    cout<< endl<< "Maximum of All Volume : " << endl;
    p1->output();
    p2 = maxSphere(a,5);
    cout<< endl<< "Maximum of Sphere Volume : " << endl;
    p2->output();
    getchar();
}