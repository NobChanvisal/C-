#include <antheader.h>

void loading(string text,int color = 7){
	for(int i = 0; i<text.length(); i++){
        foreColor(color);
		cout << text[i];
		
        delay(100);
    }
	cout << endl;
}
int main(){
	for(int j = 0; j<10; j++)
	loading("Welcome to c++ programming language for beginning",2);
}