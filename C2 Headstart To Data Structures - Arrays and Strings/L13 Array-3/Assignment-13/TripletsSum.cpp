// Count the number of triplets whose sum is equal to gien value x;

#include<iostream>
using namespace std;
int countTriplets(int arr[], int n, int x){
    int count = 0;
    for(int i=0; i<n-2 ; i++){
        for(int j=i+1; j<n-1 ; j++){
            for(int k=j+1; k<n ; k++){
                if(arr[i] + arr[j] + arr[k] == x) count++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int x;
    cout<<"Enter Target Sum: ";
    cin>>x;

    cout<<countTriplets(arr,n,x);
}