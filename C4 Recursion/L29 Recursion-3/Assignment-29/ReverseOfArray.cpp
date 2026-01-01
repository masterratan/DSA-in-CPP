// Print all the elements of an array in reverse order.

#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int n, int i){
    if(i == n) return;
    Reverse(arr, n, i+1);
    cout<<arr[i]<<" ";
}
int main(){
    int arr[] = {5,7,96,2,-5,0,8,-7,63};
    int n = sizeof(arr)/sizeof(arr[0]);

    Reverse(arr, n, 0);
}