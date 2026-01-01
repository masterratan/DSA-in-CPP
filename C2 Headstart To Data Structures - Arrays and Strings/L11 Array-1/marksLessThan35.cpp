// Given an array of marks of students, if the marks of any student is less than 35 print its roll number
// [roll number here refers to index of the array.]

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter marks: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Roll no. of students having marks less than 35 is: "<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<35) cout<<i<<endl;
    }
}