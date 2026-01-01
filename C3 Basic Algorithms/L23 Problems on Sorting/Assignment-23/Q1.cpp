// Ques. Given an array of elements, the task is to find the elements in an array that are greater than half of elements in an array.
//       In case of odd elements, we need to print elements larger than floor (n/2) elements where n is the total number of elements
//       in the array. You can print the answer in any order.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2,6,7};
    int n = sizeof(arr)/4;

    sort(begin(arr), end(arr));

    for(int i=n/2; i<n; i++) cout<<arr[i]<<" ";
}