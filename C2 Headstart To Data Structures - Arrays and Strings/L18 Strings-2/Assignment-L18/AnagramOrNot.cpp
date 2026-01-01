// Given two strings. Check whether they are anagram or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = {"feacdb"};
    string t = {"abcdef"};

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s.size() != t.size()) cout<<"Not anagram";
    else{
        bool flag = true;
        for(int i=0;i<s.size();i++){
            if(s[i] != t[i]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"anagram";
        else cout<<"Not anagram";
    }
}