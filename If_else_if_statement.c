#include<stdio.h>
#include<conio.h>

main(){
	int marks;
	printf("Enter Your Marks: ");
	scanf("%d", &marks);
	
	if(marks==100){
		printf("Topper");
	}
	else if(marks>=80 && marks<=99){
		printf("First");
	}
	else if(marks>=60 && marks<=79){
		printf("Second");
	}
	else{
		printf("Third");
	}
}
