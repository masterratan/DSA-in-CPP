// Find the element x in the array. Take array and x as input.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int x = 44;
    int n = sizeof(arr)/4;
    bool flag = false;
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            idx = i;
            flag = true;
        }
    }
    if(flag==true) cout<<"Number found at index -> "<<idx;
    else cout<<"Number not found!!";
}