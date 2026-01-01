// Ques. Given two string s and t, return true if t is an anagram of s, and false otherwise
// Input: s = physicswallah, t = wallahphysics
// Output: true
// LeetCode #242

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "trreatnamas";
    string t = "masterratan";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"true";
    else cout<<"false";
}