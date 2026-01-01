// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Minimum(int arr[], int n, int i, int ans){
    if(i == n) return ans;
    if(arr[i] < ans) ans = arr[i];
    return Minimum(arr, n, i+1, ans);
}
int main(){
    int arr[] = {4,3,2,1,5,-7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = INT_MAX;

    cout<<Minimum(arr, n, 0, ans);
}