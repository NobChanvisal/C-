#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <dir.h>

using namespace std;
string teacher[100][4];
char answer;
int irow = 0;
void header(){
	cout<< "\t";
	for(int i = 0; i<70; i++){
		cout<<"_";
	}
	cout<< endl <<endl;
	cout<< left;
	cout<< "\t";
	cout<< setw(10) << "Id";
	cout<< setw(20) << "Name";
	cout<< setw(10) << "Gender";
	cout<< setw(30) << "Email" << endl;
	
	cout<< "\t";
	for(int i = 0; i<70; i++){
		cout<<"_";
	}
	cout<<endl;
}
void readdata(){
	ifstream read;
	string temp;
	string tempdata = "";
	int icol = 0;
	irow = 0;
	read.open("Data2\\teacher.txt");
	
	while(getline(read,temp)){
		for(int i = 0; i<temp.length(); i++){
			if( temp[i] != ',')
			{
				tempdata += temp[i];	
			}
			else
			{
				teacher[irow][icol] = tempdata;
				icol++;
				tempdata = "";
			}
		}
		icol = 0;
		irow++;
	}
	read.close();
}
void table(){
	for(int i = 0; i<irow; i++){
		cout<< "\t";
		for(int j = 0; j<4; j++){
			switch(j){
				case 0: cout<< setw(10)<< teacher[i][j];
						break;
				case 1: cout<< setw(20)<< teacher[i][j];
						break;
				case 2: cout<< setw(10)<< teacher[i][j];
						break;
				case 3: cout<< setw(30)<< teacher[i][j];
						break;
			}
		}
		cout<< endl;
	}
}
bool find(string id){
	for(int i = 0; i<irow; i++)
		if(teacher[i][0] == id){
			header();
			cout<< "\t";
			cout<< setw(10)<< teacher[i][0];
			cout<< setw(20)<< teacher[i][1];
			cout<< setw(10)<< teacher[i][2];
			cout<< setw(30)<< teacher[i][3];
			return true;
		}
		return false;
}
void deletes(string id){
	ofstream write;
	unlink("Data2\\teacher.txt");
	for(int i = 0; i<irow; i++){
		if(teacher[i][0] != id){
			write.open("Data2\\teacher.txt",ios::app);
			cout<< "\t";
			write<< teacher[i][0]<< ",";
			write<< teacher[i][1]<< ",";
			write<< teacher[i][2]<< ",";
			write<< teacher[i][3]<< ","<<endl;
			write.close();
		}
	}
	cout<<"\t-------------------------------"<<endl;
	cout<<"\tDelete successfull!!"<<endl;
	cout<<"\t-------------------------------"<<endl;
}
void update(string id){
	ofstream write;
	unlink("Data2\\teacher.txt");
		for(int i = 0; i<irow; i++){
			if(teacher[i][0] != id){
				cout<< endl;
				cout<< "\tEnter new id    : ";getline(cin,teacher[i][0]);
				fflush(stdin);
				cout<< "\tEnter new name  : ";getline(cin,teacher[i][1]);
				fflush(stdin);
				cout<< "\tEnter new gender: ";getline(cin,teacher[i][2]);
				fflush(stdin);
				cout<< "\tEnter new email : ";getline(cin,teacher[i][3]);
				fflush(stdin);
			}
			write.open("Data2\\teacher.txt");
			write<< teacher[i][0]<< ",";
			write<< teacher[i][1]<< ",";
			write<< teacher[i][2]<< ",";
			write<< teacher[i][3]<< ","<<endl;
			write.close();
		}
		
		cout<<endl<< "\t---------------------------"<< endl;
		cout<< "\tUpdate successfull!!       "<< endl;
		cout<< "\t---------------------------"<< endl;
}
int main(){
	char menu;
	string id,name,gender,email;
	ofstream f;
	mkdir("Data2");
	
	start:
		cout<< endl << endl;
		cout<< "\tTeacher Information Management System"<< endl;
		cout<< "\t-------------------------------------"<< endl;
		cout<< "\t       [1]. Create new teacher         "<< endl;
		cout<< "\t       [2]. View table teacher       "<< endl;
		cout<< "\t       [3]. Find teacher by id         "<< endl;
		cout<< "\t       [4]. Delete teacher by id       "<< endl;
		cout<< "\t       [5]. Update teacher by id       "<< endl;
		cout<< "\t       [6]. Exit                       "<< endl;
		cout<< "\t_____________________________________"<< endl<< endl;
		cout<< "\tChose one optione: ";cin>> menu;fflush(stdin);
		cout<< "\t_____________________________________"<< endl<< endl;
		
		switch(menu){
			case '1':
				cout<< "\tEnter id    : ";getline(cin,id);
				fflush(stdin);
				cout<< "\tEnter name  : ";getline(cin,name);
				fflush(stdin);
				cout<< "\tEnter gender: ";getline(cin,gender);
				fflush(stdin);
				cout<< "\tEnter email : ";getline(cin,email);
				fflush(stdin);
				f.open("Data2\\teacher.txt", ios::app);
				f<< id << ","<< name<< ","<<gender<< ","<< email<< ","<< endl;
				f.close();
				
				cout<< "\t------------------------------------------"<<endl;
				cout<< "\t Save successfull!!!"<<endl;
				cout<< "\t------------------------------------------"<<endl;
				break;
			case '2':
				header();
				readdata();
				table();
				break;
			case '3':
				find_again:
				cout<< "\tEnter id: ";getline(cin,id);fflush(stdin);
				readdata();
				if(find(id) == false){
					cout<< endl <<endl;
					cout<< "\t----------------------"<<endl;
					cout<< "\t Teacher not found!!  "<<endl;
					cout<< "\t______________________"<< endl;
					cout<< "\t--> Press Y to find again!!"<<endl;
					cout<< "\t--> Press any key to menu:) "<< endl;
					char ch = getch();
					if(ch == 'Y'|| ch == 'y')
						system("cls");
						goto find_again;	
				}
				break;
			case '4':
				input:
				cout<< "\tEnter id to delete: ";getline(cin,id);fflush(stdin);
				readdata();
				if(find(id) == false){
					cout<< endl <<endl;
					cout<< "\t----------------------"<<endl;
					cout<< "\t Teacher not found!!  "<<endl;
					cout<< "\t______________________"<< endl;
					cout<< "\t--> Press Y to find again!!"<<endl;
					cout<< "\t--> Press any key to menu:) "<< endl;
					char ch = getch();
					if(ch == 'Y'|| ch == 'y'){
						system("cls");
						goto input;
						}
					else{
						system("cls");
						goto start;
					}
				}
				else{
					cout<<endl<< "\tAre you sure ?(y/n) ";cin>>answer;
					fflush(stdin);
					if(answer == 'y' || answer == 'Y'){
						deletes(id);
					}
					else
					{
						cout<<endl<< "\tDelete Cancel!!";
					}
				}
				break;
			case '5':
				cout<< "\tEnter id to update: ";getline(cin,id);fflush(stdin);
				readdata();
				if(find(id) == false){
					cout<< endl<< "\tStudent not found"<< endl;
				}
				else
				{
					update(id);
				}
				break;
			case '6': return 0;
			default:
					cout<< "\tInvalid menu!!!"<<endl;
					getch();
					system("cls");
					goto start;
		}
		getch();
		system("cls");
		goto start;
}