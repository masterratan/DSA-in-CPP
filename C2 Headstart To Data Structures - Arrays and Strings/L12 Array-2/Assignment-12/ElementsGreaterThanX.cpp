// Count the number of elements strictly greater than x in the given array.

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
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x) count++;
    }
    cout<<count;
}