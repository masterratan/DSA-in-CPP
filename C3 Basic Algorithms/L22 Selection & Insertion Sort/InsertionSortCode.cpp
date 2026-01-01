#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,-5,84,69,-77,0,-1000,200,-303};
    int n = sizeof(arr)/4;

    for(int i=1; i<=n-1; i++){
        int j = i;
        while(j >= 1 and arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}