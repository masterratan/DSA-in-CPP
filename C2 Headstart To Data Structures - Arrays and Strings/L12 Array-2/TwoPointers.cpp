// Write a program to reverse the array without using any extra array.

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
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
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        // swap
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
}