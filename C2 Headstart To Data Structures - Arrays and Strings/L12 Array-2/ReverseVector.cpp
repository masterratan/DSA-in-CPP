// Write a program to copy the contents of one array into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v,v2;
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        int k = v[n-i-1];
        v2.push_back(k);
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}