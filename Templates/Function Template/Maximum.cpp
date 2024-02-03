#include <iostream>

using namespace std;

template <class M>
M max(M &a, M &b){
    M max;
    if(a > b) max = a;
    else max = b;
    return max;
}
template <class M>
float sum(M a, M b){
    return a+b;
}
int main(){
    int a = 10, b = 20;
    float x = 1.10, y = 2.20;
    cout<< "Sum of a,b is :" <<sum(a,b)<<endl;
    cout<< "Max of a,b is :" <<max(a,b)<< endl;
    cout<< "Max of a,b is :" <<max(x,y)<< endl;
}