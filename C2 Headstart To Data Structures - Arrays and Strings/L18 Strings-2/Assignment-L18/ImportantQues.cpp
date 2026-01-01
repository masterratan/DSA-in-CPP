// Given two strings s and p, return an array of all the start indices of p's anagrams in s.
// You may return the answer in any order.

#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s = {"Master Ratan is a great man in his life time."};
    
    string word = "";
    string maxword = "";
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            maxword = max(maxword , word);
            word = "";
        }
        else word += s[i];
    }

    maxword = max(maxword , word);
    cout<<maxword<<endl;
}