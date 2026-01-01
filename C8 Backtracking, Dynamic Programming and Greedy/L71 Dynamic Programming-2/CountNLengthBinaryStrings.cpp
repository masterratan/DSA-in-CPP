// Given a number n, count the no. of binary strings of length n, without consecutive ones.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void f(vector<string>& ans, string s, int& n){
//     if(s.length() == n){
//         ans.push_back(s);
//         return;
//     }
//     f(ans, s + "0", n);
//     if(s[s.length()-1] != '1') f(ans, s + "1", n);
// }

void c(vector<string>& ans, string s, int& n, int& count){
    if(s.length() == n){
        count++;
        return;
    }
    c(ans, s + "0", n, count);
    if(s[s.length()-1] != '1') c(ans, s + "1", n, count);
}

int main(){
    int n = 10;
    vector<string> ans;

    // f(ans, "", n);

    // for(auto x : ans) cout<<x<<endl;

    for(int i=1; i<=n; i++){
        int count = 0;
        c(ans, "", i, count);
        cout<<count<<" "; // will form the fibonacci sequence
    }

    return 0;
}