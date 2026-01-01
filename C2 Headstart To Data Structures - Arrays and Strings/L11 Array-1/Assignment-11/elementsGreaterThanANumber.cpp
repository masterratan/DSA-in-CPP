// Count the numbers of elements in the given array greater than a given number x.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/4;
    int x = 4;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}