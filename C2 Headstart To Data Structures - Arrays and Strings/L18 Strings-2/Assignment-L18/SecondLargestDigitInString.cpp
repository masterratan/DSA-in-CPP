// Ques. Find the second largest digit in the string consisting of digits from '0' to '9'.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = {"65317965"};
    int n = s.size();

    sort(s.begin(),s.end());

    for(int i=n-1;i>=0;i--){
        if(s[i] != s[i-1]){
            cout<<s[i-1];
            break;
        }
    }
}