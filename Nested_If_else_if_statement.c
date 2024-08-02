#include<stdio.h>
#include<conio.h>

main(){
	int a=300, b=200, c=100;
	
	if(a<b){
		if(a<c){
			printf("%d", c);
		}
		else{
			printf("%d", a);
		}
	}
	else{
		if(b<c){
			printf("%d", b);
		}
		else{
			printf("%d", c);
		}
	}
}
