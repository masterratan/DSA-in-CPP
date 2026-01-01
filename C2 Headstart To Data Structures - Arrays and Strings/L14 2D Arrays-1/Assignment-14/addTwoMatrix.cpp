// Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows & columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of matrix-1: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    cout<<"Enter elements of matrix-2: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] += brr[i][j];
        }
    }
    cout<<"Resultant matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}