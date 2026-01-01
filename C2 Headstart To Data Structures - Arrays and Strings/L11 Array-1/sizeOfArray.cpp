#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,2,1,5,9,8,6,15,4,3,6,52,1,2,45,35};
    int n = sizeof(arr) / sizeof(arr[0]); // size of complete array / size occupied by any one index
    // Or, even we can write '4' in denominator since each int index takes 4 bytes of storage.
    cout<<"The size of the array is: "<<n;
}

// NOTE:- There is continuous memory allocation in array.