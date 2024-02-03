#include <stdio.h>
#include <conio.h>
/*int main(){
	char name[20];
	int age;
	char tell[20];
	char gender;
	float avg;
	printf("========================Input=====================\n");
	printf("Input name:");fflush(stdin);gets(name);
	printf("Input age:");scanf("%d",&age);
	printf("Input tell:");fflush(stdin);gets(tell);
	printf("Input gender:");scanf("%c",&gender);
	printf("Input avg:");scanf("%f",&avg);
	printf("========================Output====================\n");
	printf("%s\t%d\t%s\t%c\t%.2f",name,age,tell,gender,avg);
}
int main(){
	int a,b;
	printf("Input a:");scanf("%d",&a);
	printf("Input b:");scanf("%d",&b);
	
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
}*/
int main(){
	int a=5, b=5, c=10, result;
	result= (a==b) && (c>b);
	printf("(a==b) && (c>b) is %d\n",result);
	
	result= (a==b) && (c<b);
	printf("(a==b) && (c<b) is %d\n",result);
	
	result= (a==b) || (c<b);
	printf("(a==b) && (c>b) is %d\n",result);
	
	result= (a !=b) || (c<b);
	printf("(a !=b) && (c>b) is %d\n",result);
	
	result= (a !=b) || (c<b);
	printf("(a !=b) && (c>b) is %d\n",result);
	
	result= !(a =b) || (c<b);
	printf("!(a =b) && (c>b) is %d\n",result);
	
}
