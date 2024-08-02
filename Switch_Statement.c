#include<stdio.h>
#include<conio.h>

main(){
	int a, b, c;
	int ch;
	
	printf("Enter Two Integers: ");
	scanf("%d%d", &a, &b);
	
	printf("Enter The Case Number: ");
	scanf("%d", &ch);
	
	switch(ch){
		case 1: c=a+b;
		printf("%d", c);
		break;
		
		case 2: c=a-b;
		printf("%d", c);
		break;
		
		case 3: c=a*b;
		printf("%d", c);
		break;
		
		case 4: c=a/b;
		printf("%d", c);
		break;
		
		case 5: c=a%b;
		printf("%d", c);
		break;
	}
}
