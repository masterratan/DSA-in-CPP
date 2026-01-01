#include<iostream>
#include<stack>
using namespace std;
bool BalancedBrackets(string s){
    if(s.size()%2) return false;
    stack<char> st;
    int i=0;
    while(i<s.size()){
        if(s[i] == '(') st.push(s[i]);
        else{ // s[i] == ')'
            if(st.empty()) return false;
            st.pop();
        }
        i++;
    }
    return st.size()==0;
}
int main(){
    string s = "(())))";
    if(BalancedBrackets(s)) cout<<"Balanced!";
    else cout<<"Not Balanced!";
}