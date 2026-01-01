// Find largest number in the given array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,5};
    int x = INT_MIN;
    for(int i=0;i<9;i++){
        if(x<=arr[i]) x = arr[i];
    }
    cout<<x;
}