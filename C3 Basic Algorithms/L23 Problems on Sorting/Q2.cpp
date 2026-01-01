// Ques. Given an array with N distinct elements, convert the given array to a form where all ements are in the range from 0 to N-1.
// The order of elements is the same, i.e., 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, ...
// N-1 is placed for the largest element.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = sizeof(arr)/4;

    int brr[n];
    for(int i=0; i<n; i++) brr[i] = 0;

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int min_idx = -1;

        for(int j=0; j<n; j++){
            if(brr[j] == 1) continue;
            if(min > arr[j]){
                min = arr[j];
                min_idx = j;
            }
        }

        arr[min_idx] = x;
        brr[min_idx] = 1;
        x++;
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}