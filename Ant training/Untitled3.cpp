#include <stdio.h>
int main(){
	int a[5];
	int i,*p;
	printf("Input array\n");
		for(i=0; i<5; i++){
			printf("a[%d] = ",i);scanf("%d",a+i);
		}
	printf("Array\n");
	p = a;
		for(i=0; i<5; i++)
		printf("%5d",*(p+i));
	printf("\nReverse Array\n");
	p = &a[4];
		for(i=0; i<5; i++)
		printf("%5d",*(p-i));
}