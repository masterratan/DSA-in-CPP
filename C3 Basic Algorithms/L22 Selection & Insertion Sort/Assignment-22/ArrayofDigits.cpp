// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must be 
// used to form the two number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,1,0,5,2,3};
    int n = sizeof(arr)/4;

    // Step-1: Sort the array.
    for(int i=1; i<=n-1; i++){
        int j = i;
        while(j >= 1 and arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    // Step-2: Take out the largest number from the sorted array.
    int x = 0;
    for(int i=0; i<n; i++){
        x = 10*x + arr[i];
    }

    // Step-3: Take out the second largest number from the same sorted array.
    for(int i=n-1; i>=1; i--){
        if(arr[i] != arr[i-1]){
            swap (arr[i],arr[i-1]);
            break;
        }
    }

    int y = 0;
    for(int i=0; i<n; i++){
        y = 10*y + arr[i];
    }
    
    // Step-4: Printing the sum.
    cout<<x+y;
}