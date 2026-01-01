#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return;
}
int main(){
    int arr[] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function
    // updation
    display(arr, size); // array is always passed in a function by reference and not by value
}