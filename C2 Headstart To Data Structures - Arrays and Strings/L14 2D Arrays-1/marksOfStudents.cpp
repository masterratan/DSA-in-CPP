// Write a program to store roll number and marks obtained by 4 students side by side 
// in a matrix.

#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    //            0  1  2  3
    // Roll no. 0 66 20 14 12
    // Marks    1 80 89 99 83

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<4; j++){
            if(i == 0){
                cout<<"Enter roll no. of student "<<j+1<<": ";
                cin>>arr[i][j];
            }
            else {
                cout<<"Enter marks of student "<<j+1<<": ";
                cin>>arr[i][j];
            }
        }
    }
    
    cout<<"Your entered data table is: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}