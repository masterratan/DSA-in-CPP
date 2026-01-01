// Ques. Given a positive integer n, generate a n * n matrix filled with elements from 1 to n^2 in spiral order.
// LeetCode #59

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter dimensions of matrix: ";
    cin>>m>>n;
    int arr[m][n];
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;
    while(minr <= maxr and minc <= maxc){
        // right
        for(int j=minc;j<=maxc and count<tne;j++){
            count++;
            arr[minr][j] = count;
        }
        minr++;
        // down
        for(int i=minr;i<=maxr and count<tne;i++){
            count++;
            arr[i][maxc] = count;
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc and count<tne;j--){
            count++;
            arr[maxr][j] = count; 
        }
        maxr--;
        // up
        for(int i=maxr;i>=minr and count<tne;i--){
            count++;
            arr[i][minc] = count;
        }
        minc++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}