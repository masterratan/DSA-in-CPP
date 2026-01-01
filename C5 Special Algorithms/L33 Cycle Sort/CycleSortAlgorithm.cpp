#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // cycle sort
    int i = 0;
    while(i < n){
        if(arr[i] != (i+1)){
            swap(arr[i], arr[arr[i]-1]);
        }
        else i++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Worst Case Time Complexity -> O(n)