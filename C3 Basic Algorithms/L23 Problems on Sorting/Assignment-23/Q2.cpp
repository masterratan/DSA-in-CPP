// Given an integer array and an integer k where k <= size of array. We need to return the kth smallest element of the array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2,6,7};
    int n = sizeof(arr)/4;
    int k = 3;

    for(int i=0; i<k; i++){
        int min = arr[i];
        int mindx = i;
        for(int j=i; j<n; j++){
            if(min > arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    cout<<arr[k-1];

}