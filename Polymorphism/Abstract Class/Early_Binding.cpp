#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
class First{
    protected:
        float x;
    public:
        First(float x1 = 0): x(x1){};
        void output(){
            cout<< "x = "<< x << endl;
        }
        float sum(){return x + x;}
        float doubleSum(){return 2 *  sum();}
};
class Second: public First{
    private: 
        float y;
    public:
        Second(float x1 = 0, int y1 = 0): First(x1),y(y1){};
        void output(){
            First::output();
            cout<< "y = "<< y << endl;
        }   
        float sum(){return y+y+y;}
};
int main(){
    //Early Binding ចាប់យកពេល Compile;
    Second obj(5,6);
    cout<< "Sum = "<< obj.sum()<< endl;
    cout<< "Double Sum = "<< obj.doubleSum()<< endl;
    obj.output();
    First* p = new Second(7,3);
    cout<< "Sum = "<< p ->sum() << endl;
    cout<< "Double Sum = "<< p ->doubleSum()<< endl;
    p ->output();
    getchar();
}