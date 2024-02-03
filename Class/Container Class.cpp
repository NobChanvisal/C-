#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
class Point{
	private:
		float x;
		float y;
	public:
		Point(): x(0.0), y(0.0){}
		Point(float a, float b): x(a), y(b){}
		void input(){
			cout<< "\t-------------------------"<<endl;
			cout<< "\tEnter x : ";cin>>x;
			cout<< "\tEnter y : ";cin>>y;
			cout<< endl;
		}
		void output(){
			cout<<"\t("<<x<< ","<<y << ")";		
		}
		float distanceFrom(Point p){
			float dx, dy;
			dx = fabs(x - p.x);
			dy = abs(y - p.y);
			return sqrt(dx*dx + dy*dy);
		}
};
class Triagle{
	private:
		Point a,b,c;
		float s1,s2,s3;
		void evalSides(){
			s1 = a.distanceFrom(b);
			s2 = b.distanceFrom(c);
			s3 = c.distanceFrom(a);
		}
		public:
			Triagle(){evalSides();}
			Triagle(Point p1, Point p2, Point p3):
				a(p1), b(p2), c(p3){evalSides();}
		void input(){
			cout<< "\tVertex 1"<<endl;a.input();
			cout<< "\tVertex 2"<<endl;b.input();
			cout<< "\tVertex 3"<<endl;c.input();
			evalSides();
		}
		void output(){
			cout<<endl<< "\tVertex 1 = ";a.output();
			cout<<endl<< "\tVertex 2 = ";b.output();
			cout<<endl<< "\tVertex 3 = ";c.output();
			cout<<endl<< "\tAea = "<<area()<<endl;
		}
		float area(){
			float hp = (s1+s2+s3)/2.0;
			return sqrt(hp*(hp - s1) * (hp - s2) * (hp - s3));
		}
};
int main(){
	Triagle *a;
	int n;
	cout<< "\tNumber of triangles: ";cin>>n;
	a = new Triagle[n];
	for(int i = 0; i<n; i++){
		cout<< "\tTriangle "<< (i+1)<< ":"<<endl<<endl;
		a[i].input();
	}
	cout<<endl<< "\tAll Triangle: "<<endl;
	cout<< "\t-------------------------"<<endl;
	for(int i = 0; i<n; i++) a[i].output();
	
	getch();
}