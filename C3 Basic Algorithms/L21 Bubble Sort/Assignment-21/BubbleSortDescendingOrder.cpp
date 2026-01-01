#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;

    int n = v.size();

    // bubble sort
    for(int i=0; i<n-1; i++){ // n-1 passes
        // traverse
        bool flag = true;
        for(int j=n-1; j>=1+i; j--){
            if(v[j]>v[j-1]){
                swap(v[j], v[j-1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}