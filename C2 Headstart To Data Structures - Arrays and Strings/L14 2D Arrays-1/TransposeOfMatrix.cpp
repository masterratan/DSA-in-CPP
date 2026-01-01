// Leetcode #867

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Rows: ";
    cin>>n;
    cout<<"Enter Columns: ";
    cin>>m;
    // Input Matrix
    int arr[n][m];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Transpose Matrix
    int brr[m][n];
    cout<<"Transpose Matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j] = arr[j][i];
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}