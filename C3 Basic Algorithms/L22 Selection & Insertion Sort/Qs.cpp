// Sort a string in decreasing order of values associated after removal of values smaller than X.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,8,5,0,4,9,6,2,1,3};
    int n = sizeof(arr)/4;
    int x = 5;
    vector<int>v;
    for(int i=0; i<n; i++){
        if(arr[i] > x){
            int k = arr[i];
            v.push_back(k);
        }
    }

    for(int i=1; i<=v.size()-1; i++){
        int j = i;
        while(j >= 1 and v[j] < v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }

    reverse(v.begin(),v.end());
    
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}