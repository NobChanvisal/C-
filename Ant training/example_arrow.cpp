#include <antheader.h>

int main()
{
	char choice;
	int y = 2;
	
	setcursor(false, 0);
	
	mainMenu:
	cout << "    School Management System" << endl;
	cout << "    ------------------------" << endl;
	cout << "--> (1) Manage Teacher      " << endl;
	cout << "    (2) Manage Student      " << endl;
	cout << "    (3) Exit                " << endl;
	cout << "    ------------------------" << endl;
	cout << "    Note: [s] Down, [w] Up, [e] Select" << endl;
	
	select:
	choice = getch();
	
	if (choice == 's')
	{
		gotoxy(0, y);
		cout << "    ";
		
		if (y == 4)
		{
			y = 2;
		}
		else
		{
			y++;
		}
		
		gotoxy(0, y);
		cout << "--> ";
		goto select;
	}
	else if (choice == 'w')
	{
		gotoxy(0, y);
		cout << "    ";
		
		if (y == 2)
		{
			y = 4;
		}
		else
		{
			y--;
		}
		
		gotoxy(0, y);
		cout << "--> ";
		goto select;
	}
	else if (choice == 'e')
	{
		if (y == 2)
		{
			system("cls");
			y = 2;
			
			cout << "    Manage Teacher" << endl;
			cout << "    ------------------------" << endl;
			cout << "--> (1) Register New Teacher" << endl;
			cout << "    (2) View Table Teacher  " << endl;
			cout << "    (3) Back                " << endl;
			cout << "    (4) Exit                " << endl;
			cout << "    ------------------------" << endl;
			cout << "    Note: [s] Down, [w] Up, [e] Select" << endl;
			
			selectTeacher:
			choice = getch();
			
			if (choice == 's')
			{
				gotoxy(0, y);
				cout << "    ";
				
				if (y == 5)
				{
					y = 2;
				}
				else
				{
					y++;
				}
				
				gotoxy(0, y);
				cout << "--> ";
				goto selectTeacher;
			}
			else if (choice == 'w')
			{
				gotoxy(0, y);
				cout << "    ";
				
				if (y == 2)
				{
					y = 5;
				}
				else
				{
					y--;
				}
				
				gotoxy(0, y);
				cout << "--> ";
				goto selectTeacher;
			}
			else if (choice == 'e')
			{
				if (y == 2)
				{
					
				}
				else if (y == 3)
				{
					
				}
				else if (y == 4)
				{
					system("cls");
					y = 2;
					goto mainMenu;
				}
				else if (y == 5)
				{
					return 0;
				}
			}
		}
		else if (y == 3)
		{
			
		}
		else if (y == 4)
		{
			return 0;
		}
	}
}