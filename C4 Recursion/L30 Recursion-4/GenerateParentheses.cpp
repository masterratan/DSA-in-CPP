// Ques. Generate Parentheses
// LeetCode #22

// Classic Recursion Question

#include<bits/stdc++.h>
using namespace std;
void GenerateParentheses(string s, int open, int close, int n){
    if(close == n){
        cout<<s<<endl;
        return;
    }
    if(open < n) GenerateParentheses(s+"(", open+1, close, n);
    if(close < open) GenerateParentheses(s+")", open, close+1, n);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    GenerateParentheses("", 0, 0, n);
}