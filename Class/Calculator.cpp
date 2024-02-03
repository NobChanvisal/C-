#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
class Calculate{
	private:
		int x;
		int y;
	public:
		Calculate(){//defualt constructor
			x = 20;
			y = 30;
		}
		void input(){
			cout<< "Enter number 1 : ";fflush(stdin);
			cin>>x;
			cout<< "Enter number 2 : ";fflush(stdin);
			cin>>y;
		}
		void output(){
			//cout<<"\t";
			cout<<left;
			cout<<setw(10)<<x;
			cout<<setw(10)<<y;
		}
		void setData(int data1, int data2){//Implementor
			x = data1;
			y = data2;
		}
		int getx(){ 
		return x;
		}
		int gety(){
		 return y;
		}	
};
//void inputAll(Calculate cal[i], int n){
//	for(int i = 0; i<=n; i++){
//		cout<< "Element "<< i+1 << ":"<<endl;
//		cal[i].input();
//	}
//}
//void outputAll(Calculate cal[i], int n){
//	for(int i = 0; i<=n; i++){
//		
//		cal[i].output();
//	}
//}
	int sumData(Calculate cal){//sum of two data
			int sum;
			sum = cal.getx() + cal.gety();
			return sum;
		}
int main(){
//	int n;
	Calculate cal;
//	cout<< "Enter number of element: ";fflush(stdin);
//	cin>>n;
	cout<< "Enter Your Data:"<<endl;
	cout<< "-------------------------------------"<<endl;
	cal.input();
	cout<< "Output Data: "<<endl;
	cout<< "-------------------------------------"<<endl;
	cal.output();
//	cout<< "PGCD = "<<pGCD()<<endl;
//	cout<< "PPCM = "<<pPCM()<<endl;
	cout<<endl<< "Sum of Data : "<<sumData(cal);
}