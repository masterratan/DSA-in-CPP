// Write a program to add two matrices.

#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter Rows: ";
    cin>>n;
    cout<<"Enter Columns: ";
    cin>>m;
    // Input Matrix-1
    int arr[n][m];
    cout<<"Enter Matrix-1: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Input Matrix-2
    int brr[n][m];
    cout<<"Enter Matrix-2: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }

    cout<<"Resultant Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] += brr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}