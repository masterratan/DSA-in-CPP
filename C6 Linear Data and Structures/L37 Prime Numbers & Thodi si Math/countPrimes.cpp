// Count Primes
// LeetCode #204
// Given an integer n, return the number of prime numbers that are strictly less than n.

#include<bits/stdc++.h>
using namespace std;
void fillSieve(vector<bool>& sieve){
    int n = sieve.size()-1;
    for(int i=2; i<=sqrt(n); i++){
        for(int j=i*i; j<=n; j+=i){
            sieve[j] = 0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<bool> sieve(n+1,1); // 1 means Prime, 0 means Not Prime
    sieve[0] = 0;
    sieve[1] = 0;
    fillSieve(sieve);
    int count = 0;
    for(int i=2; i<n;i++){
        if(sieve[i]==1) count++;
    }
    cout<<count;
}