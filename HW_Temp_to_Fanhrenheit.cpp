#include<iostream>
#include<conio.h>
using namespace std;
main(){
	float temp;
	float Fahrenheit;
	cout<<"Enter the Temperature(in 'C): ";
	cin>>temp;
	cout<<endl;
	
	cout<<"The Tempertaure in Celsius is "<<temp<<" 'C."<<endl;

	Fahrenheit = (temp * (9/5)) + 32;
	
	cout<<endl<<"The Temperature in Fahrenheit is "<<Fahrenheit<<" 'F. ";
	
}
