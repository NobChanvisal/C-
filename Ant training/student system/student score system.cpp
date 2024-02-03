#include "C:\Users\DELL\Desktop\Ant training\student system/studentScore.h"
#include "C:\Users\DELL\Desktop\Ant training/menu.h"
int main(){
	Menu m;
	StudentScore ss;
	m.title = "Student Score Management System";
	m.menus[0] = "(1) Register new student";
	m.menus[1] = "(2) Insert Student Score";
	m.menus[2] = "(3) View Table Score ";
	m.menus[3] = "(4) Exit             ";
	m.numberOfMenu = 4;
	m.display();
	if(m.selectedMenu == 1){
		ss.registerName();
		w.open("Data3\\Student Score.bin", ios::binary|ios::app);
		w.write((char*)&&ss, sizeof(StudentScore));
	}
}