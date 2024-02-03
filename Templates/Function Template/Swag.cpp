#include <iostream>

using namespace std;
class Rectangles{
    private:
        float lenght;
        float width;
    public:
        Rectangles(float l = 0, float w = 0):lenght(l),width(w){}
        void input(){
            cout<< "Enter Lenght : ";cin>> lenght;
            cout<< "Enter Width  : ";cin>> width;
        }
        void output(){
            cout<< lenght << "\t"<< width << "\t"<< area()<< endl;
        }
        float area(){return lenght * width;}
};
template < class T >
void swag(T &a, T &b){
    T temp;
    temp = a;
    a = b; 
    b = temp;
}
int main(){
    int a = 1, b = 2;
    float x = 2.3, y = 4.5;
    Rectangles r(2,3), r2(3,4);
    swag(a,b);
    swag(x,y);
    swag(r,r2);
    cout<< "a = "<< a<< ",b = "<< b<< endl;
    cout<< "x = "<< x<< ",y = "<< y<< endl;
    cout<< "Rectangle r : "<< endl;r.output();
    cout<< "Rectangle r2:"<< endl;r2.output();
}