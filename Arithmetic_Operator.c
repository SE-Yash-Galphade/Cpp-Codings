#include<stdio.h>
#include<conio.h>

main(){
	int a=30, b=20;
	
	printf("%d", (a>b)&&(b<a));
	printf("\n%d", (a>b)||(a<b));
	printf("\n%d", !(a<b));
}
