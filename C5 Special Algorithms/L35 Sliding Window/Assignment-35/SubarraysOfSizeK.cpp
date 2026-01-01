// Subarrays of size K with average greater than equal to threshold
// LeetCode #1343

// Testcase:- 
// 2 2 2 2 5 5 5 8
// k = 3, th = 4

#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,13,17,23,29,31,7,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3; // size of subarray
    int th = 5; // threshold

    int sum = 0;
    for(int i=0; i<k; i++) sum += arr[i]; // tno = k
    int count = 0;
    if(sum/k >= th) count++;
    
    // sliding window
    int i = 1;
    int j = k;
    while(j < n){ // tno = n-k
        sum = sum + arr[j] - arr[i-1];
        if(sum/k >= th) count++;
        i++;
        j++;
    }
    cout<<count;
}