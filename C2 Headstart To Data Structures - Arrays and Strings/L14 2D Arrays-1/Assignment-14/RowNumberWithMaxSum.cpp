// WAP to print the row number having the maximum sum in a given matrix.

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
    int sum = 0;
    int rowSum = 0;
    int idx = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rowSum += arr[i][j];
        }
        if(sum < rowSum){
            sum = rowSum;
            idx = i;
        }
        rowSum = 0;
    }
    cout<<"Row with index "<<idx<<" has maximum sum.";
}