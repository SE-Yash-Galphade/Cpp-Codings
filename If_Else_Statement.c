#include<stdio.h>
#include<conio.h>

main(){
	int age;
	printf("Enter Age: ");
	scanf("%d", &age);
	
	if(age>=18){
		printf("Valid");
	}
	else{
		printf("Invalid");
	}
}
