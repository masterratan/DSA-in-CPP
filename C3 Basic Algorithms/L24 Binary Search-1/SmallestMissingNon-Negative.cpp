// Ques. Given a sorted array of non-negative distict integers, find the smallest missing non-negative element in it.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = 0;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = (lo + hi)/2;
        if(arr[mid] == mid) lo = mid + 1;
        else {
            ans = mid;
            hi = mid - 1;
        }
    }

    cout<<ans;
}