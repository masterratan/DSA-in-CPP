// Find second largest number in the given array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int max = INT_MIN;
    for(int i=0;i<9;i++){
        if(max<=arr[i]) max = arr[i]; // max stores the maximum value
    }
    int smax = INT_MIN;
    for(int i=0;i<9;i++){
        if(smax<=arr[i] and arr[i]!=max) smax = arr[i];
    }
    cout<<smax;
}