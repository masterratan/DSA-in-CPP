// Write a program to print the sum of all the element of a 2D matrix.

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Rows: ";
    cin>>n;
    cout<<"Enter Columns: ";
    cin>>m;

    // Input
    int arr[n][m];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
    }

    cout<<"Sum of elements: "<<sum;
}