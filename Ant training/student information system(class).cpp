#include "lib/menu.h"

int main(){
	Menu m;
	m.title    = "Student Information Management";
	m.menus[0] = "(1) Register New Student ";
	m.menus[1] = "(2) View Table Student";
	m.menus[2] = "(3) Exit";
	m.numberOfMenu = 3;
	
	start:
		m.display();
		
		if(m.selectedMenu == 1){
			
		}
		else if(m.selectedMenu == 2){
			
		}
		else if(m.selectedMenu == 3){
			return 0;
		}
		getch();
		system("cls");
		goto start;
}