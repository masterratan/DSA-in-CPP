// Check whether the given string is palindrome or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);

    int n = str.size();
    bool flag = true; // assuming the string to be a palindrome initially
    for(int i=0;i<n;i++){
        if(str[i] != str[n-i-1]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}