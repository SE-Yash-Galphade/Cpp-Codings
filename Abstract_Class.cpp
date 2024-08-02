#include<iostream>
#include<conio.h>
using namespace std;

class Shape{
	public:
		virtual void draw()=0;
};
class Rectangle{
	public:
		void one(){
			cout<<"This is a Rectangle"<<endl;
		}
};
class Circle{
	public:
		void two(){
			cout<<"This is a Circle";
		}
};
int main(){
	Rectangle rec;
	Circle obj;
	rec.one();
	obj.two();
}
