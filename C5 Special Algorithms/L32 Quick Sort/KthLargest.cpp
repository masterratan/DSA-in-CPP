// Note:- kth largest element = (n-k+1)th smallest element

#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx and j>pivotIdx){
        if(arr[i] <= pivotElement) i++;
        if(arr[j] > pivotElement) j--;
        else if(arr[i] > pivotElement and arr[j] <= pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthLargest(int arr[], int si, int ei, int k, int n){
    int pi = partition(arr,si,ei);
    if(pi+1 == (n-k+1)) return arr[pi];
    else if(pi+1 < (n-k+1)) return kthLargest(arr,pi+1,ei,(n-k+1),n);
    else return kthLargest(arr,si,pi-1,(n-k+1),n);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    // After Sorting
    // -8 1 2 3 4 5 6 7 8
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<<kthLargest(arr,0,n-1,k,n);
}