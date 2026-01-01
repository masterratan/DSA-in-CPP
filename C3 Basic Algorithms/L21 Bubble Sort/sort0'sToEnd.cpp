// Ques. Push zeroes to end while maintaining the relative order of other elements.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(9);

    v[0] = 5;
    v[1] = 0;
    v[2] = 1;
    v[3] = 2;
    v[4] = 0;
    v[5] = 0;
    v[6] = 4;
    v[7] = 0;
    v[8] = 3;

    int n = v.size();

    // bubble sort
    for(int i=0; i<n-1; i++){ // n-1 passes
        // traverse
        for(int j=0; j<n-1-i; j++){
            if(v[j]==0){
                swap(v[j], v[j+1]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}