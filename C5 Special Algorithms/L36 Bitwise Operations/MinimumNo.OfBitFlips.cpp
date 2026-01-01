// Practice
// Calculate the minimum number of bit flips to convert from one number to another.

// Example:-
// 5 can be written as 0101 and 11 can be written as 1011
// So number of bit flips required will be 3

// Intuition
// We have to find how many bits are different in the two binary numbers
// XOR can be useful

// Steps to Code:-
// x = 5 (0101)
// y = 11 (1011)
// x^y = 1110
// here, 1 denotes change required & denotes no change required
// count no. of set bits (1's) in x^y

#include<iostream>
using namespace std;
int main(){
    int x = 23;
    int y = 32;
    cout<<__builtin_popcount(x^y);
}