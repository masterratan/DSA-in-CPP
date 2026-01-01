// LeetCode #704

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-1,0,3,5,9,12};
    int target = 9;
    int n = sizeof(arr)/4;

    bool flag = false; // Assuming target element not present in the given array !
    sort(begin(arr),end(arr));

        int tar_idx = -1;
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(arr[mid] == target){
                tar_idx = mid;
                flag = true; // Target element found !
                break;
            }
            else if(arr[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }

        if(flag) cout<<"Target found at index: "<<tar_idx;
        else cout<<"Target not found !";
    
}

// Note-1 :- Sometimes while calculating mid = (lo + hi)/2, we can get some number out of bound error.
//           Simply use mid = lo + (hi - lo)/2 in such situations.
// Note-2 :- Time Complexity of Binary Search Algorithm = O(logn)
// Note-3 :- Whenever it is given in Question that 'Given a sorted array', there are chances of BSA in it.