#include <antheader.h>

class StudentScore
{
	public:
		int id;
		string name, gender;
		double cpp = -1, csharp = -1, java = -1,total,avg;
		
		void registerName(){
			cout<< "     Enter Id     :";cin>> id;
			fflush(stdin);
			cout<< "     Enter Name   :";getline(cin,name);
			fflush(stdin);
			cout<< "     Enter Gender :";getline(cin,gender);
			fflush(stdin);
		}
		
		void insertScore(){
			cout<< "     Enter CPP    :";cin>> cpp;
			fflush(stdin);
			cout<< "     Enter C#     :";cin>>csharp;
			fflush(stdin);
			cout<< "     Enter JAVA   :";cin>>java;
			fflush(stdin);
		}
		
		void output(){
			cout<< left;
			cout<< "     "<< setw(10)<< id;
			cout<< "     "<< setw(20)<< name;
			cout<< "     "<< setw(10)<< gender;
			
			if(cpp == -1){
				cout<< setw(8)<< "N/A";
			}
			else
			{
				cout<< setw(8)<<cpp;
			}
			
			if(csharp == -1){
				cout<< setw(8)<< "N/A";
			}
			else
			{
				cout<< setw(8)<<csharp;
			}
			
			if(java == -1){
				cout<< setw(8)<< "N/A";
			}
			else
			{
				cout<< setw(8)<<java;
			}
			
			if(cpp != -1 && csharp != -1 && java != -1){
				total = cpp + csharp + java;
				cout<< setw(10) << total;
			}
			else
			{
				cout<< setw(10) << "N/A";
			}
			
			if(cpp != -1 && csharp != -1 && java != -1){
				avg = total/3;
				cout<< setw(10) << avg;
			}
			else
			{
				cout<< setw(10) << "N/A";
			}
		}
};