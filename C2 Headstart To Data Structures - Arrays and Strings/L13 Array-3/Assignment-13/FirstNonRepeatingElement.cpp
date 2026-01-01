#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,8,9,0,8,7,-1,0,9};
    int n = sizeof(arr)/4;

    int idx = -1;
    for(int i=0 ; i<n ; i++){
        bool flag = false; // assuming i is non-repeating
        // Forward Search
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){ // means i will come forward
                flag = true;
                break;
            }
        }
        // Backward Search
        for(int k=i-1 ; k>=0 ; k--){
            if(arr[i] == arr[k]){ // means i had already came
                flag = true;
                break;
            }
        }
        if(flag == false){
            idx = i;
            break;
        }
    }

    cout<<"First non-repeating element is "<<arr[idx];
}