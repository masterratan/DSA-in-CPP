// Find the difference between the sum of elements at even indices to sum of elements
// at odd indices.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/4;
    int sumeven = 0;
    for(int i=0;i<n;i=i+2){
        sumeven += arr[i];
    }
    int sumodd = 0;
    for(int i=1;i<n;i=i+2){
        sumodd += arr[i];
    }
    cout<<"Difference is: "<<abs(sumodd-sumeven);
}
