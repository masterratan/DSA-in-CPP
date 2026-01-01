// WAP to print the matrix in spital form:-

// 1 2 3
// 4 5 6    ->  1 2 3 6 9 8 7 4 5
// 7 8 9

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter dimensions of matrix: ";
    cin>>m>>n;
    cout<<"Enter elements of matrix: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];            
        }
    }
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;
    while(minr <= maxr and minc <= maxc){
        // right
        for(int j=minc;j<=maxc and count<tne;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        // down
        for(int i=minr;i<=maxr and count<tne;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc and count<tne;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // up
        for(int i=maxr;i>=minr and count<tne;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}