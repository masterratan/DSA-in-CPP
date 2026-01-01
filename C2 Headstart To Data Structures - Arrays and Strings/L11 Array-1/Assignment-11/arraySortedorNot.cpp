// Check whether the array is sorted or not

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {7,8,9,10,11,12}; // Condition: Elements must not be repeated
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    if(arr[0]<=arr[1]){ // possibility of ascending order
        bool flag = true; // expecting sorted array is in ascending order
        for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            flag = false;
        }
        }
        if(flag == true) cout<<"Sorted in Ascending Order.";
        else cout<<"Unsorted Array";
    }
    if(arr[0]>arr[1]){ // possibility of descending order
        bool flag = true; // expecting sorted array is in descending order
        for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            flag = false;
        }
        }
        if(flag == true) cout<<"Sorted in Descending Order.";
        else cout<<"Unsorted Array";
    }    
}
