#include <antheader.h>
void loading(int length, string style = "-",int time = 200){
	for(int i = 1; i<=length; i++){	
		cout<< style;
		delay(time);
	}
}
int main(){
	loading(20);
}