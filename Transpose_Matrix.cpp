#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a[3][2], i, j;
	cout<<"Enter Array Number: ";
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Matrix Array"<<endl;
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				cout<<ends<<" "<<a[i][j]<<" ";
				cout<<endl;
			}
		}
}
