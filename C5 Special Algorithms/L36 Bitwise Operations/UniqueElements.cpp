// Practice
// Given an integer array where every element occurs twice except one cuurs only one. Find that unique element.

// Intuition
// let a be any natural number, then:-
// a^a = 0;
// 0^a = a;
// XOR (^) is a commutative operator

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,4,1,3,2,3,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = 0;
    for(int i=0; i<n; i++){
        res ^= arr[i];
    }
    cout<<res;
}