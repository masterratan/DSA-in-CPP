// Skip a Character
// Remove all occurence of 'a' from a string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeChar(string ans, string original,int idx){
    if(idx == original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='a') removeChar(ans,original, idx+1);
    else removeChar(ans+ch,original, idx+1);
}
int main(){
    string str = "ratan choudhary";

    // Normal method
    // string s = "";
    // for(int i=0; i<str.length();i++){
    //     if(str[i] != 'a') s += str[i];
    // }
    // cout<<s;

    // Recursive Method
    removeChar("",str,0);
}