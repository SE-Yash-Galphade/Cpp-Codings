#include<iostream>
#include<conio.h>
using namespace std;

class A{
	public:
		virtual void display(){
			cout<<"Base Class";
		}
};
class B{
	public:
		void display(){
			cout<<"Derived Class";
		}
};
main(){
	A* a;
	A b;
	a=&b;
	a -> display();
}
