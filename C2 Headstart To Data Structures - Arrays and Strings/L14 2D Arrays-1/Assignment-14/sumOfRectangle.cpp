// Given a matrix 'A' of dimension n*m and and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows & columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int l1,l2,r1,r2;
    cout<<"Enter Co-ordinate-1: ";
    cin>>r1>>l1;
    cout<<"Enter Co-ordinate-2: ";
    cin>>r2>>l2;
    int sum = 0;
    for(int i=r1;i<=r2;i++){
        for(int j=l1;j<=l2;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum: "<<sum;
}