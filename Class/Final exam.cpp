#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>

using namespace std;

class Product{
	private:
		int code;
		char name[20];
		float price;
		int qty;
	public:
		Product(int c  = 1 , char *n = "abc", float p = 2 , int q = 5){
			code =c;
			strcpy(name,n);
			price = p;
			qty = q; 
		}
		void input(){
			cout<< "\tEnter Code : ";cin>>code;fflush(stdin);
			cout<< "\tEnter Name : ";cin.get(name,20);fflush(stdin);
			cout<< "\tEnter Price: ";cin>>price;
			cout<< "\tEnter QTY  : ";cin>>qty;
		}
		void output(){
			cout<< left<<"\t";
			cout<< setw(10)<< code;
			cout<< setw(30)<< name;
			cout<< setw(10)<< price;
			cout<< setw(10)<< qty;
		    cout<< endl;
		}
		float totalPrice(){
			return price;
		}
		
};
float totalSum(Product pr[], int n){
float sum = 0;
	for(int i = 0; i<n; i++){
		sum += pr[i].totalPrice();
	}
	return sum;
}
int main(){
	Product pt[6] = { Product(2, "sal",2,2),Product(3, "visal",3,3),Product(4, "faisal",4,4),
					 Product(5, "chanvisal",5,5),Product(6, "sal zone",6,6),Product(7, "sal loy",7,7)
					 };
	// OUTPUT OT PT6
//	for(int i = 0; i<6; i++){
//		pt[i].output();
//	}
	Product *a;
	int n;
	//input data:
	cout<< "\tEnter Number Of Product: ";cin>>n;
	a = new Product[n];
	cout<< "\t-----------------------------------------"<<endl;
	cout<< "\tEnter All Products:"<<endl;
	cout<< "\t-----------------------------------------"<<endl;
	for(int i = 0; i<n; i++){
		cout<<endl<< "\t\tProduct "<< i + 1<< ":"<<endl;
		a[i].input();
	}
	//Output data;
	cout<< endl<< "\tOutput All Product: "<<endl;
	cout<< "\t-----------------------------------------"<<endl<<endl;
	for(int i = 0; i<n; i++) a[i].output();
	//total of priceSum:
	cout<< endl<< "\tSum of total Product is : "<< totalSum(a,n)<<endl;
}