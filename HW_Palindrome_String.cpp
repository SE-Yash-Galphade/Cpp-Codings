#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main(){
	char a[]="Kanak";
	char x;
	char y;
	void show(){
		char a = x;
	}
	cout<<"Enter String: ";
	cin>>a;
	
	y=strrev(a);
	
	if(y==x){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}
}
