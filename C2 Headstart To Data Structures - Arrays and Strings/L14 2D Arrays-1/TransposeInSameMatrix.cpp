// WAP to change the given matrix with its transpose.
// Matrix given must be a square matrix.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    // Input Matrix
    int arr[n][n];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // Transpose Matrix
    cout<<"Transpose Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // swap arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}