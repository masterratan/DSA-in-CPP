// Practice
// Given an integer n, flip all its bits i.e. if the given bit is 1, change it to 0 and vice versa

// Intuition
// Eg:- 1 1 0 0 1 0 1 1 0 ....(1) Decimal -> 406
// Step-1:- Convert it to all 1's
// 1 1 1 1 1 1 1 1 1 ....(2)
// Step-2:- Take XOR of (1) and (2)
// 0 0 1 1 0 1 0 0 1 Decimal -> 105 

#include<iostream>
using namespace std;
int max_pow_of_2_smaller_than_n(int x){
    int temp;
    while(x != 0){
        temp = x;
        x = x & (x-1);
    }
    return temp;
}
int Flip_all_bits(int n){
    // Step-1:- Convert it to all 1's
    int p = max_pow_of_2_smaller_than_n(n);
    p = p*2 - 1;

    // Step-2:- Take XOR of (1) and (2)
    return n^p;
}
int main(){
    int n = 406;
    cout<<Flip_all_bits(n);
}