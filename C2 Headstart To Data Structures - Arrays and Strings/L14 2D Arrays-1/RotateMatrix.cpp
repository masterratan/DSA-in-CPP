// LeetCode #48
// WAP to rotate a matrix by 90 degrees clockwise.

// 1 2 3      7 4 1
// 4 5 6  ->  8 5 2
// 7 8 9      9 6 3

// Step-1: Take Transpose of the matrix.
// Step-2: Reverse each row;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    // Input matrix
    int arr[n][n];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // Step-1: Transpose matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // swap i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Step-2: Reverse each row
    for(int k=0;k<n;k++){ // traversing through each row
        int i = 0;
        int j = n-1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }     
    }
    // Output
    cout<<"Rotated Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

