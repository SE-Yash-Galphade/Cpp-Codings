#include<iostream>
#include<conio.h>
using namespace std;

class A{
	int a, b;
	
	public:
		void input(){
			cout<<"Enter Value";
			cin>>a>>b;
		}
		friend void add(A ob);
};
void add(A ob){
	int c;
	c=ob.a+ob.b;
	cout<<c;
}
main(){
	A obj;
	obj.input();
	add(obj); 
}
