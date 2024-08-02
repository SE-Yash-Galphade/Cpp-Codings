#include<stdio.h>
#include<conio.h>

main(){
	float percentage;
	int total_marks=650;
	int marks_scored=500;
	
	percentage= ((float)marks_scored / total_marks ) * 100;
	
	printf("Percentage = %.2f%%", percentage);
}
