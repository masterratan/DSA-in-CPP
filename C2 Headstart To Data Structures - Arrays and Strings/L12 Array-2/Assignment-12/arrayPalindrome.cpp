#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        if(v[i]!=v[n-i-1]) flag = false;
    }
    if(flag==true) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}