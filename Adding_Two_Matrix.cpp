#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
    int a[3][3], i, j, t[3][3];
    cout<<"Enter Elements for First Matrix: ";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cin>>a[i][j];
    }
    cout<<endl<<"First Matrix is: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    
    {
	
    int a[3][3], i, j, t[3][3];
    cout<<"Enter Elements for Second Matrix: ";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cin>>a[i][j];
    }
    cout<<endl<<"Second Matrix is: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
}
}
