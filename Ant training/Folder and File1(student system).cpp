#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <dir.h>
#include <fstream>

using namespace std;
string student[100][4];
int  irow = 0;
void header(){
	for(int i = 0; i<55; i++){
		cout<< "-";
	}
	cout<< endl;
	cout<< left;
	cout<< setw(10)<< "Id";
	cout<< setw(20)<< "Name";
	cout<< setw(10)<< "Gender";
	cout<< setw(15)<< "Phone"<<endl;
	for(int i = 0; i<55; i++){
		cout<< "-";
	}
	cout<< endl;
}
void readdata(){
	
	ifstream read;//write
	string temp;
	string tempdata = "";
	int icol = 0;
	irow = 0;
	read.open("Data1\\student.txt");
	
	while(getline(read, temp)){
		for(int i = 0; i < temp.length(); i++){
			if(temp[i] != ',')
			{
				tempdata += temp[i];
			}
			else
			{
				student[irow][icol] = tempdata;
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
	for( int i = 0; i< irow; i++){
		for( int j = 0; j<4; j++){
			switch(j)
			{
				case 0:
					cout<< setw(10)<< student[i][j];
					break;
				case 1:
					cout<< setw(20)<< student[i][j];
					break;
				case 2:
					cout<< setw(10)<< student[i][j];
					break;
				case 3:
					cout<< setw(15)<< student[i][j];
					break;
			}
		}
		cout<< endl;
	}
}
bool find(string id){
	for(int i = 0; i < irow; i++)
		if(student[i][0] == id){
			header();
			cout<< setw(10)<< student[i][0];
			cout<< setw(20)<< student[i][1];
			cout<< setw(10)<< student[i][2];
			cout<< setw(15)<< student[i][3];
			cout<< endl;
			return true;
		}
		return false;
}
void deletes(string id){
	ofstream write;
	unlink("Data1\\student.txt");
	for( int i = 0; i< irow; i++){
		if(student[i][0] != id){
			write.open("Data1\\student.txt", ios::app);
			write << student[i][0] << ",";
			write << student[i][1] << ",";	
			write << student[i][2] << ",";
			write << student[i][3] << ","<< endl;
			write.close();
		}
	}
	cout<< endl << "Delete is successfull!!!"<< endl;
}
void update(string id){
	ofstream write;
	unlink("Data1\\student.txt");
	for( int i = 0; i< irow; i++){
		if(student[i][0] == id){
			cout<< "Enter new id     : ";getline(cin,student[i][0]);
			fflush(stdin);
			cout<< "Enter new name   : ";getline(cin,student[i][1]);
			fflush(stdin);
			cout<< "Enter new gender : ";getline(cin,student[i][2]);
			fflush(stdin);
			cout<< "Enter new phone  : ";getline(cin,student[i][3]);
			fflush(stdin);
		}
			write.open("Data1\\student.txt", ios::app);
			write << student[i][0] << ",";
			write << student[i][1] << ",";	
			write << student[i][2] << ",";
			write << student[i][3] << ","<< endl;
			write.close();	
	}
	cout<< endl << endl <<"Update is successfull!!!"<< endl;
}
int main(){
	char menu;
	char y,n,answer;
	string id;
	string name, gender, ph;
	ofstream f;//write
	
	mkdir("Data1");//create folder
	
	start:
	cout<< "Student Information Management System"<< endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "1. Create new student                "<< endl;
	cout<< "2. View table student                "<< endl;
	cout<< "3. Find student by id                "<< endl;
	cout<< "4. Delete student by id              "<< endl;
	cout<< "5. Update student by id              "<< endl;
	cout<< "6. Exit                              "<< endl;
	cout<< "_____________________________________"<< endl<< endl;
	cout<< "Chose one optione: ";cin>> menu;fflush(stdin);
	cout<< "_____________________________________"<< endl<< endl;
	
	switch(menu){
		case '1':
			cout<< "Enter id     : ";cin>>id;fflush(stdin);
			cout<< "Enter name   : ";getline(cin,name);
			fflush(stdin);
			cout<< "Enter gender : ";getline(cin,gender);
			fflush(stdin);
			cout<< "Enter phone  : ";getline(cin,ph);
			fflush(stdin);
			f.open("Data1\\student.txt", ios::app);//ios::app use for data continue
			f<< id << ","<< name<< ","<< gender << ","<<ph<< ","<< endl;
			f.close();
			
			cout<< "------------------------------------------"<< endl;
			cout<< "Save successfull!!!                       "<< endl;
			cout<< "------------------------------------------"<< endl;
				break;
		case '2':
			header();
			readdata();
				
			table();
			break;
		case '3':
			cout<< "Enter id: ";getline(cin,id);fflush(stdin);
			readdata();
			if(find(id) == false){
				cout<< "Student not found"<< endl;
			}
			break;
		case '4':
			cout<< "Enter id to delete: ";getline(cin,id);fflush(stdin);
			readdata();
			if(find(id) == false){
				cout<< endl<< "Student not found"<< endl;
			}
			else
			{
				cout<<endl << endl << "Are you sure ? (y/n)";cin>> answer;fflush(stdin);
				
				if(answer == 'y'){
					deletes(id);
				}
				else
				{
					cout<< endl << endl << "Delete cancel";
				}	
			}
			break;
		case '5':
			cout<< "Enter id to update: ";getline(cin,id);fflush(stdin);
			readdata();
			
			if(find(id) == false){
				cout<< endl<< "Student not found"<< endl;
			}
			else
			{
				update(id);
			}
			break;
		case '6': return 0; 
		default :
			cout<< "Invalid menu!!!"<<endl;
			system("cls");
			goto start;
	}
	getch();
	system("cls");
	goto start;
}