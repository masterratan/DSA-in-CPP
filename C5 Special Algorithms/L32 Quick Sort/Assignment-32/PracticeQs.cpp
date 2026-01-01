// Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in linear time.
// Assume there are no duplicates in the array.

// Input: A[] = {3,8,6,7,5,9,10} -> here 5 & 8 are swapped
// Output: A[] = {3,5,6,7,8,9,10}

#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,8,6,7,5,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int i1 = -1;
    int i2 = -1;
    for(int i=0; i<=n-2; i++){
        if(arr[i]>arr[i+1]){
            i1 = i;
            break;
        }
    }
    for(int i=n-1; i>=1; i--){
        if(arr[i-1]>arr[i]){
            i2 = i;
            break;
        }
    }
    swap(arr[i1],arr[i2]);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
