// WAP to display the elements of middle row and the elements of middle column of a 2D matrix
// [Assuming the 2D Array to be a square matrix with odd dimension i.e. 3*3, 5*5, 7*7 etc...]

#include<iostream>
using namespace std;
int main(){
    int n; // n must be an odd number
    cout<<"Enter order of matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int mid = (n+1)/2;
    cout<<"Middle Row:- "<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[mid-1][j]<<" ";
    }
    cout<<endl;
    cout<<"Middle Column:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i][mid-1]<<endl;
    }
}