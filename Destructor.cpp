#include<iostream>
#include<conio.h>
using namespace std;

int a=0;
class A{
	public:
		A(){
			cout<<++a<<endl;
		}
		~A(){
			cout<<a--<<endl;
		}
};
main(){
	A obj;
}
