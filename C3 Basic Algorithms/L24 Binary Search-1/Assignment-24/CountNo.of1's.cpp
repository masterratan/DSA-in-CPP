// Ques. Given a sorted binary array, efficiently count the total number of 1's in it.
// Focus on the word -> Binary Array
// 0 0 0 0 0 1 1 1 1 1 1 1 1

// First Intuition -> Find first occurence of 1 and subtract it with last index of array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1; // Target Element

    int idx = -1;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] != x){ // First occurence
                idx = mid;
                break;
            }
            else { // arr[mid-1] == x (Not first occurence)
                hi = mid - 1;
            }
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    
    if(idx == -1) cout<<0;
    else cout<<n-idx;
}