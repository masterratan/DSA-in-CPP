// Practice
// Given an integer n, find the maximum power of two that is smaller than n.

// #include<iostream>
// using namespace std;
// Method-1
// int max_pow_of_2_smaller_than_n(int x){
//     int temp;
//     while(x != 0){
//         temp = x;
//         x = x & (x-1);
//     }
//     return temp;
// }
// Method-2
// int max_pow_of_2_smaller_than_n(int n){
//     n = n | (n >> 1);
//     n = n | (n >> 2);
//     n = n | (n >> 4);
//     n = n | (n >> 8);
//     n = n | (n >> 16);
//     return (n+1)>>1; // same as (n+1)/2
// }
// int main(){
//     int n = 90;
//     cout<<max_pow_of_2_smaller_than_n(n);
// }

// Given an integer n, find the least power of two that is greater than n.

#include<iostream>
using namespace std;
// Method-1
// int min_pow_of_2_greater_than_n(int x){
//     int temp;
//     while(x != 0){
//         temp = x;
//         x = x & (x-1);
//     }
//     return temp*2;
// }
// Method-2
int min_pow_of_2_greater_than_n(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return n+1;
}
int main(){
    int n = 90;
    cout<<min_pow_of_2_greater_than_n(n);
}