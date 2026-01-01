// Given a no. n, you can perform any of the following operations on it, some no. of times.
// 1. Reduce n to n-1
// 2. If n is divisible by 2 make it n/2
// 3. If n is divisible by 3 make it n/3

#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;
// Done by self:- [Greedy]
// int f(int n){
//     if(n == 1) return 0;

//     if(n%3 == 0) return 1 + f(n/3);
//     if(n%2 == 0) return 1 + f(n/2);
//     return 1 + f(n-1); 
// }

int f(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    bool flag1 = false, flag2 = false;

    if(n%2 == 0) flag1 = true;
    if(n%3 == 0) flag2 = true;

    if(flag1 && flag2) return dp[n] = 1 + min( f(n-1) , min(f(n/2) , f(n/3)) );
    else if(flag1) return dp[n] = 1 + min( f(n-1) , f(n/2) );
    else if(flag2) return dp[n] = 1 + min( f(n-1) , f(n/3) );
    else return dp[n] = 1 + f(n-1);
}

int main(){ // n -> 1000
    int n = 10;
    // Wrong:- Greedy Approach -> Do maxm dedn first by dividing it by 3 then 2 then subtract 1
    // 10 -> [/2] -> 5 -> [-1] -> 4 -> [/2] -> 2 -> [/2] -> 1 {Total min 4 steps acc. to Greedy}
    // Correct:- Recursion -> Check for every possibility
    // 10 -> [-1] -> 9 -> [/3] -> 3 -> [/3] -> 1 {Total min 3 steps acc. to Recursion}

    dp.clear();
    dp.resize(1005, -1);
    cout<<f(n)<<endl;

    return 0;
}

// Done by self ^^ :- But it is wrong, greedy will not give correct answer in this question => need to explore every possibility
// Greedy Intution:- In general for a number n, if(n is divisible by 3) n/3 will reduce it more rapidly,
//                 then comes n/2 (if n is divisible by 2), then come n-1