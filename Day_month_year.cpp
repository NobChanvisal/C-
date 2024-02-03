#include <stdio.h>
#include <conio.h>

int main(){
	int day,month,year;
	start:
		printf("\n\n\t----------------------------------\n");
		printf("\tEnter Year : ");scanf("%d",&year);
		printf("\tEnter Month: ");scanf("%d",&month);
		printf("\t__________________________________\n");
		if((month == 2) && (year % 4 == 0)){
			printf("\tIn this month have 29 Day\n\n");
		}
		else if(month == 2){
			printf("\tIn this month have 28 Day\n\n");
		}
		else if(month == 1 || month == 3 || month == 5){
			printf("\tIn this month have 31 Day\n\n");
		}
		else if(month == 7 || month == 8 || month == 10 || month == 12){
			printf("\tIn this month have 31 Day\n\n");
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11){
			printf("\tIn this month have 30 Day\n\n");
		}
		else 
		{
			printf("\tIt have 12 month in one year!!!\n");
		}
		printf("\tDo you want to find again ? [y/n]");
		char ch = getch();
		if(ch == 'y'|| ch == 'y')goto start;
		return 0;
}