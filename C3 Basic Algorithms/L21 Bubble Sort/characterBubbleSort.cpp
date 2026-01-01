// Sort a String in decreasing order of the values associated after removal of values smaller than X.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "AZYZXBDJKX";

    // Removal
    string s;
    for(int i=0;i<str.size();i++){
        if(str[i] >= 'X'){
            char ch = str[i];
            s.push_back(ch);
        }
    }

    // Sorting
    int pass = 0;
    while(pass != s.size()-1){
        pass++;
        bool flag = true;
        for(int i=0; i<=s.size()-pass-1; i++){
            if(s[i] > s[i+1]){
                swap(s[i],s[i+1]);
                flag = false;
            }
        }
        if(flag) break;
    }

    // Reverse
    reverse(s.begin(),s.end());
    
    // Printing
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}