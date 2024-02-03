#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
class Point{
	private:
		int x,y;
	public:
		void input(){
			cout<< "\tInput Value of x and y:"<<endl;
			cout<< "\t----------------------------------"<<endl;
			cout<< "\tEnter x : ";cin>>x;
			cout<< "\tEnter y : ";cin>>y;
			cout<< endl;
		}
		void output(){
			cout<<"("<<x <<","<<y << ")"<<endl;
		}
		int distace( Point p){
			float d;
			d = sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
			return d;
		}
};
int main(){
	Point a,b,c;
	float d1,d2,d3,p,s;
	cout<<endl<<endl;
	cout<< "\tEnter Data Of Point a: "<<endl;
	a.input();
	cout<< "\tEnter Data Of Point b: "<<endl;
	b.input();
	cout<< "\tEnter Data Of Point b: "<<endl;
	c.input();
	cout<< "\t________________________________"<<endl;
	cout<< "\tData Of Point a: ";
	a.output();
	cout<< "\tData Of Point b: ";
	b.output();
	cout<< "\tData Of Point c: ";
	c.output();
	cout<< "\t------------------------------"<<endl;
		d1 = a.distace(b);//distace point a to b
		d2 = a.distace(c);//distace point a to c
		d3 = b.distace(c);//distace point b to c
	p = (d1+d2+d3)/2;
	s = sqrt(p*(p-d1)*(p-d2)*(p-d3));

	cout<<endl<< "\tArea of triangle is : "<<s <<endl;
	getch();
}