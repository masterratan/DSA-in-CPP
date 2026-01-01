// Ques. Remove consecutive duplicates in a string.

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string CompressString(string s){
    stack<char> st;
    st.push(s[0]);
    int i=1;
    while(i<s.size()){
        if(s[i] != st.top()) st.push(s[i]);
        i++;
    }
    s = "";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<CompressString(s);
}