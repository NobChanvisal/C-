#include <iostream>
#include <conio.h>

using namespace std;
class Rectangle{
	private:
		int length;
		int width;
	public:
		void input(){//Function member
			cout<< "\tEnter length: ";cin>>length;
			cout<< "\tEnter widht : ";cin>>width;
			cout<< endl;
		}
		void output(){//Function member
			cout<< "\t"<<length<<"\t"<<width<<"\t"<<area()<<endl;
		}
		float area(){//Function member
			return length*width;
		}
};
void inputAll(Rectangle a[], int n){
	for(int i = 0; i<=n; i++)
		a[i].input();
}
void outputAll(Rectangle a[], int n){
	for (int i = 0; i<=n; i++)
		a[i].output();
}
float totalArea(Rectangle a[], int n){
	int s = 0;
	for(int i = 0; i<=n; i++)
		s = s + a[i].area();
		return s;
}
int main(){
	Rectangle r[100];
	int n;
	cout<< endl<<endl;
	cout<< "\tNUMBER OF RECTANGLE : ";cin>>n;
	cout<< "\t________________________________"<<endl;
	cout<< "\tEnter all Rectangle :"<<endl;
	inputAll(r,n);
	cout<< "\tOUTPUT OF ALL RECTANGLE:"<<endl;
	cout<< "\t________________________________"<<endl;
	outputAll(r,n);
//		int total = totalArea(p,n);
//	cout<< "Total Area: "<< total<<endl;
	cout<<endl<< "\tTotal Area: "<<totalArea(r,n);
	getch();
}