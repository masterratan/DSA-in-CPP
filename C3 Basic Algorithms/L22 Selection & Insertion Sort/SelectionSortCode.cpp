#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,-5,84,69,-77,0,-1000,200,-303};
    int n = sizeof(arr)/4;

    for(int i=0; i<=n-2; i++){
        int min = INT_MAX;
        int idx = -1;
        for(int j=i; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}