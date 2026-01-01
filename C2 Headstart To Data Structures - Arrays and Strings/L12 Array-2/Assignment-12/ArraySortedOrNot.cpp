// WAP to check whether a given array is sorted or not.
// Here sorted means arranged in ascending order only.

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
    for(int i=0;i<=v.size()-2;i++){ // i will stop at second last index
        if(v[i]<=v[i+1]) continue;
        else{
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Sorted Array";
    else cout<<"Unsorted Array";
}