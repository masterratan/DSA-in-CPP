/*Find the unique number in a given array where all the elements are repeated twice with one value being unique*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    // Input
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if((i!=j) and (arr[i]==arr[j])){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<endl;
            break;
        }
    }
}
