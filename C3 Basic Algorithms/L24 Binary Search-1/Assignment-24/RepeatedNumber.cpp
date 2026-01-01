// Ques. Given an array of integers nums containing n+1 integers where each integer is in the range [1,n]
//       inclusive in sorted order. There is only one repeated number in nums, return this repeated number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,11,12};
    int n = sizeof(arr)/sizeof((arr[0]));

    int lo = 0;
    int hi = n-1;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == mid){
            if(arr[mid-1] != mid-1){
                cout<<arr[mid-1];
                break;
            }
            else hi = mid-1;
        }
        else if(arr[mid] == mid+1) lo = mid + 1;
    }
}