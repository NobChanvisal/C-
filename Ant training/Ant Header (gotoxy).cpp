#include <antheader.h>
//gotoxy(x,y)->x colum;
int main(){
	string name;
	int age;
	string phone;
	
	cout<< "Enter name:";getline(cin,name);
	fflush(stdin);
	cout<< "Enter age :___(year)";gotoxy(11,1);
	star:
	cin>>age;fflush(stdin);
	if(age < 0){
		gotoxy(11,1);
		cout<< "            ";
		gotoxy(11,1);
		goto star;
	}
	cout<< "Enter Phone:+885_________";gotoxy(16,2);
	cin>>phone;
	cout<< "________________________"<<endl;
	cout<< "Name   : "<< name << endl;
	cout<< "Age    : "<< age  << endl;
	cout<< "Phone  : 0"<< phone <<endl;
}