// BUBBLE SORT ALGORITHM
// Worst Case:- {5,4,3,2,1} i.e. Descending Order


// Self Written Code - Master Ratan
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    v[0] = 95;
    v[1] = -78;
    v[2] = 0;
    v[3] = -202;
    v[4] = 47;

    int pass = 0;
    while(pass != v.size()-1){
        pass++;
        bool flag = true; // assuming array is sorted initially
        for(int i=0; i<=v.size()-pass-1; i++){
            if(v[i] > v[i+1]){
                swap(v[i],v[i+1]);
                flag = false;
            }
        }
        if(flag) break; // means array is sorted 
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}