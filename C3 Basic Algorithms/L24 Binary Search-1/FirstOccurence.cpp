#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,3,3,3,3,4,4,5,5,9};
    int n = sizeof(arr)/4;
    int x = 3; // Target

    bool flag = false;
    sort(begin(arr),end(arr));

    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] != x){ // First occurence
                flag = true;
                cout<<"First occurence of "<<x<<" at index: "<<mid;
                break;
            }
            else { // arr[mid-1] == x (Not first occurence)
                hi = mid - 1;
            }
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }

    if(flag==false) cout<<-1;
    
}