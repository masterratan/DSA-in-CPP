#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {57,43,24,16,9,2};
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);

    bool flag = false; // Assuming target element not present in the given array !
    sort(begin(arr),end(arr));
    reverse(begin(arr),end(arr));

        int tar_idx = -1;
        int lo = n-1;
        int hi = 0;
        while(hi <= lo){
            int mid = (lo + hi)/2;
            if(arr[mid] == target){
                tar_idx = mid;
                flag = true; // Target element found !
                break;
            }
            else if(arr[mid] > target) hi = mid + 1;
            else lo = mid - 1;
        }

        if(flag) cout<<"Target found at index: "<<tar_idx;
        else cout<<"Target not found !";
    
}