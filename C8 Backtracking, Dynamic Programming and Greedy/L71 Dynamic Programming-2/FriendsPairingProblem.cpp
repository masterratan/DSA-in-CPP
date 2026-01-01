// Given n friends, each one can remain single or can be paired up with some other friend. Each friend
// can be paired only once. Find out the total number of ways in which friends can remain single or can 
// be paired up.

// Input:-
// n = 3
// Output:-
// ans = 4
// {A},{B},{C} , {AB},{C} , {A},{BC} , {AC},{B} 
#include<bits/stdc++.h>
using namespace std;

// int f(int n){
//     int ans = 1;
//     for(int i=1; i<=n; ++i){
//         ans *= 2;
//     }
//     return ans;
// }

int f(int n){
    if(n == 1 || n == 2) return n;
    return f(n-1) + (n-1)*f(n-2);
}

int main(){
    int n = 10;
    
    for(int i=1; i<=n; i++){
        // cout<<f(i-1)<<" ";
        cout<<f(i)<<" ";
    }

    return 0;
}