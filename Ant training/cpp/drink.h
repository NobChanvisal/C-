#include <antheader.h>

using namespace std;

class Drink{
	private:
		string name;
		int qty;
		float price;
		
	public:
		double total(){
			return qty * price;
		}
		
		void input(){
			cout<< "Enter name : ";getline(cin,name);
			fflush(stdin);
			cout<< "Enter Qty  : ";cin>>qty;
			fflush(stdin);
			cout<< "Enter Price: ";cin>>price;
			fflush(stdin);
			cout<< endl;
		}
		void output(){
			cout<< left;
			cout<< setw(20)<<name;
			cout<< setw(10)<<int_string(qty) + "Can";
			cout<< setw(10)<<int_string(price) + "$";
			cout<< setw(10)<<int_string(total()) + "$"<<endl;
			
		}
		
};