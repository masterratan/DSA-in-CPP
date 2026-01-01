#include<bits/stdc++.h>
using namespace std;
int Addition(int arr[], int n, int i, int sum){
    if(i == n) return sum;
    return Addition(arr, n, i+1, sum + arr[i]);
}
int main(){
    int arr[] = {4,3,2,1,5,-7,18,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    cout<<Addition(arr, n, 0, sum);
}