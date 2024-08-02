#include<iostream>
using namespace std;

class A{
	int a, b;
	
	public:
		void input(){
			cout<<"Enter Value";
			cin>>a>>b;
		}
		friend class B;
};
class B{
	int c;
	public:
		void sum(A ob){
			c=ob.a+ob.b;
			cout<<c;
		}
};
main(){
	A obj;
	B obj2;
	obj.input();
	obj2.sum(obj);
}
