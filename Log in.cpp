#include <antheader.h>
#include <fstream>
void get_password(char* pass)
{
    char temp_passP[25];
    int i=0;
     while(1)
    {
            temp_passP[i]=getch();
            if(temp_passP[i]==13){break;}
            else if(temp_passP[i]==8)
            {
                if(i!=0) {
                cout<< "\b \b";
                i--;
                } else {cout<< "\a";}
            }
            else
            {
                cout<< "*";
                *(pass+i) = temp_passP[i];
                i++;
            }
             *(pass+i)='\0';
     }
}
void login(){
	int i;
	char name[20],password[20];
	char userName[20],userPW[20];
 	char temp;
	start:
	drawBoxSingleLineWithBG(12,4,40,4,11);
	gotoxy(25,5);foreColor(23);cout<< "Log in account";
	HLine(12, 6, 40,11,196);
	foreColor(7);
	gotoxy(13,7);cout<< "Enter Name     : ";
	gotoxy(30,7);cin.get(userName,20);fflush(stdin);
	foreColor(7);
	gotoxy(13,8);cout<< "Enter Password : ";get_password(userPW);
		
		ifstream output ("Visal.bin",ios::binary);
		output.read((char*) &name, sizeof(name));
		output.read((char*) &password ,sizeof(password));
		output.close();
		if(strcmp(name,userName) == 0)
			if(strcmp(password,userPW) != 0){
				foreColor(4);
				gotoxy(13,10);cout<< "Login Unsuccessfull!!! ";
				gotoxy(13,11);cout<<"--> Please check your Password"<<endl;
				foreColor(7);
				getch();
				system("cls");
				goto start;
			}
			else{
				foreColor(2);
				gotoxy(13,10);cout<< "Login Successfull!!"<<endl;
				foreColor(7);
			}
		else{
			foreColor(4);
			gotoxy(13,10);cout<< "Login Unsuccessfull!!! ";
			gotoxy(13,11);cout<< "--> Please check your User name"<<endl;
			foreColor(7);
			getch();
			system("cls");
			goto start;
		}
				
}

void registerName(){
	int temp1,temp2;
	char name[20],password[20],password1[20];
		cout<< "Enter Name     : ";cin.get(name,20);fflush(stdin);
		again:
			cout<< "Enter Password : ";
			
			for(int i = 0; i<20; i++){
				temp1 = getch();
				if((temp1 >= 'a' && temp1<= 'z')||(temp1 >= 'A' && temp1<= 'Z')||(temp1 >= '1' && temp1<= '9')){
					password[i] = temp1;
					
					cout<< "*";
				}
				if(temp1 == '\r'){
					password[i] = '\0';
					break;
				}
			}	
		cout<< "\nEnter Password Again : ";
			for(int i = 0; i<20; i++){
					temp2 = getch();
					if((temp2 >= 'a' && temp2<= 'z')||(temp2 >= 'A' && temp2<= 'Z')||(temp2 >= '1' && temp2<= '9')){
						password1[i] = temp2;
						
						cout<< "*";
					}
					if(temp2 == '\r'){
						password1[i] = '\0';
						break;
					}
				}	
		if(strcmp(password,password1) != 0){
			cout<< "Please input on password again like password!!"<<endl;
			goto again;
		}
		ofstream input ("Visal.bin",ios::binary);
		input.write((char*) &name,sizeof(name));
		input.write((char*) &password,sizeof(password));
		input.write((char*) &password1,sizeof(password1));
		input.close();
}
int main(){
	int choice;
		cout<< "1.register"<<endl;
		cout<< "2.log in "<<endl;
		cout<< "Enter choice : "<<endl;
		choice = getch();
		switch(choice){
			case '1' : registerName();
					break;
			case '2' : login();
					break;
		}
	}