// Ques. Given a 2D matrix having 0-1 only where each row is sorted in increasing order, 
//       find the row with the maximum number of 1's.

// 0 0 0 1 1 1 
// 0 0 1 1 1 1
// 0 0 0 0 1 1
// 0 1 1 1 1 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][6] = {{0,0,0,1,1,1},{0,0,1,1,1,1},{0,0,0,0,1,1},{0,1,1,1,1,1}};
    int n = sizeof(arr[0])/4; // columns
    int m = sizeof(arr)/sizeof(arr[0]); // rows

    int x = 1; // Target Element

    int maxCount = -1;
    int max_idx = -1;

    for(int i=0; i<m; i++){
        int count = 0;
        int idx = -1;
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid] == x){
                if(arr[i][mid-1] != x){ // First occurence
                    idx = mid;
                    break;
                }
                else { // arr[mid-1] == x (Not first occurence)
                    hi = mid - 1;
                }
            }
            else if(arr[i][mid] < x) lo = mid + 1;
            else hi = mid - 1;
        }
        
        if(idx == -1) count = 0;
        else count = n-idx;

        if(count > maxCount){
            maxCount = count;
            max_idx = i;
        }
    }

    cout<<max_idx;
}