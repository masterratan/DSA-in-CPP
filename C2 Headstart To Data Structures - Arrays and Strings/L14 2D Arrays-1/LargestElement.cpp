// Write a program to find the largest element of a given 2D array of integers.

#include<iostream>
#include<climits>
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

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }

    cout<<"Largest element: "<<max;
}