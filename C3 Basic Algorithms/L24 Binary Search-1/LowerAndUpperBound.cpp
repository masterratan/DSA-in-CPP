// Given a sorted integer array and an integer 'x', find the lower bound of x.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,2,2,2,2,2,2,2};
    int x = 2; // target
    int n = sizeof(arr)/4;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<mid-1; // For upper bound:- cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false){
        cout<<"Lower Bound: "<<hi<<endl; // Lower bound is always on high
        cout<<"Upper Bound: "<<lo; // Upper bound is always on low
    }
}
