#include <iostream>
#include <conio.h>
#include <dir.h>
#include <fstream>

//mkdir() -> for make folder;
//rmdir() -> for remove folder;
using namespace std;
int main(){
	//mkdir("D:\\Movie");//make in drive...
	mkdir("Data");
	ofstream f;
	cout<< "Enter name: ";
	f.open("Data\\student.txt");
	
	f.close();	
	
}