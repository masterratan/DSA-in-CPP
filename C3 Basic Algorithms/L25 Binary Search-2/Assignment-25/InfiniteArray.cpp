// Ques. Binary Search in Infinite array. [Amazon]

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int tgt = 15;
    // we can't find out n (size of array) in an infinite array.

    // Step-1: We will try to find out ranges of hi & lo considering: lo < tgt < hi
    int lo = 0;
    int hi = 1;
    while(arr[hi] < tgt){
        lo = hi;
        hi *= 2;
    }

    // Step-2: Now that we have got the range of hi & lo we can apply simple binary search.
    bool flag = false;
    int tgt_idx = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == tgt){
            tgt_idx = mid;
            flag = true;
            break;
        }
        else if(arr[mid] < tgt) lo = mid + 1;
        else hi = mid - 1;
    }

    if(flag) cout<<"Target found at idx: "<<tgt_idx;
    else cout<<"Target not found!";
}