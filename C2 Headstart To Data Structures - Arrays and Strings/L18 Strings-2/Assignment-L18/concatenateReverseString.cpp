// Ques. Input a string and concatenate with its reverse string and print it.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: "<<endl;
    getline(cin,s);

    string t = s;
    reverse(t.begin(),t.end());
    
    cout<<s+t;
}