#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
    int a[3][3], i, j, t[3][3];
    cout<<"Enter Elements for Original Matrix: ";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cin>>a[i][j];
    }
    cout<<endl<<"Original Matrix is: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    
    
//    //Transpose side
//    for(i=0; i<3; i++){
//        for(j=0; j<3; j++)
//            t[j][i] = a[i][j];
//    }
//    cout<<endl<<"The Transpose of Given Matrix is: "<<endl;
//    for(i=0; i<3; i++){
//        for(j=0; j<3; j++)
//            cout<<t[i][j]<<"  ";
//        cout<<endl;
//    }
}
