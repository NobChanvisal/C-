#include "lib/menu.h"

int main()
{
	Menu mainMenu, teacherMenu, studentMenu;
	
	mainMenu.title = "School Management System";
	mainMenu.menus[0] = "(1) Manage Teacher";
	mainMenu.menus[1] = "(2) Manage Student";
	mainMenu.menus[2] = "(3) Exit";
	mainMenu.numberOfMenu = 3;
	mainMenu.menuColor = 2;
	
	mainMenuLabel:
	mainMenu.display();
	
	if (mainMenu.selectedMenu == 1)
	{
		system("cls");
		teacherMenu.title = "Manage Teacher";
		teacherMenu.menus[0] = "(1) Register New Teacher";
		teacherMenu.menus[1] = "(2) View Table Teacher";
		teacherMenu.menus[2] = "(3) Back";
		teacherMenu.menus[3] = "(4) Exit";
		teacherMenu.numberOfMenu = 4;
		teacherMenu.menuColor = 3;
		
		teacherMenu.display();
		
		if (teacherMenu.selectedMenu == 1)
		{
			
		}
		else if (teacherMenu.selectedMenu == 2)
		{
			
		}
		else if (teacherMenu.selectedMenu == 3)
		{
			system("cls");
			goto mainMenuLabel;
		}
		else if (teacherMenu.selectedMenu == 4)
		{
			return 0;
		}
	}
	else if (mainMenu.selectedMenu == 2)
	{
		system("cls");
		studentMenu.title = "Manage Student";
		studentMenu.menus[0] = "(1) Register New Student";
		studentMenu.menus[1] = "(2) View Table Student";
		studentMenu.menus[2] = "(3) Back";
		studentMenu.menus[3] = "(4) Exit";
		studentMenu.numberOfMenu = 4;
		studentMenu.menuColor = 4;
		
		studentMenu.display();
		if (studentMenu.selectedMenu == 1)
		{
			
		}
		else if (studentMenu.selectedMenu == 2)
		{
			
		}
		else if (studentMenu.selectedMenu == 3)
		{
			system("cls");
			goto mainMenuLabel;
		}
		else if (studentMenu.selectedMenu == 4)
		{
			return 0;
		}
	}
	else if (mainMenu.selectedMenu == 3)
	{
		return 0;
	}
}