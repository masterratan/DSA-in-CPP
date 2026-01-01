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

    // Output    
    cout<<endl<<"Your Input Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
}