// Print index of a given element in an array. If not present, print -1.

#include<bits/stdc++.h>
using namespace std;
int FindTarget(int arr[], int n, int i, int tgt){
    if(i == n) return -1;
    if(arr[i] == tgt) return i;
    return FindTarget(arr, n, i+1, tgt);
}
int main(){
    int arr[] = {4,3,2,1,5,-7,18,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tgt = 10;

    cout<<FindTarget(arr, n, 0, tgt);
}