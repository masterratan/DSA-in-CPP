// WAP to find the largest three elements in the array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<=arr[i]) max = arr[i]; // x stores the maximum value
    }
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(smax<=arr[i] and arr[i]!=max) smax = arr[i]; // smax stores second maximum value
    }
    int tmax = INT_MIN;
    for(int i=0;i<n;i++){
        if(tmax<=arr[i] and arr[i]!=max and arr[i]!=smax) tmax = arr[i]; // smax stores third maximum value
    }
    cout<<"First Maximum: "<<max<<endl<<"Second Maximum: "<<smax<<endl<<"Third Maximum: "<<tmax;
}
