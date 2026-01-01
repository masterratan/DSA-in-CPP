// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,4,2,7,4};

//     // Correct Ways
//     int* ptr = arr; // giving address
//     int* ptr = &arr[0]; // Though we give pointer the address of first element, but the pointer can 
//     // access and modify the entire array.

//     // Wrong Way
//     // int* ptr = arr[0];
//     // int* ptr = &arr;

//     cout<<ptr;
// }

// Using Pointers we can access each and every element of the array even we can modify them.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,7,4};
    int* ptr = arr;
    ptr[0] = 8; // Or, *ptr = 8;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" "; // Or, cout<<i[ptr]<<" "; // Or, cout<<i[arr]<<" ";
    }
    cout<<endl;
    // METHOD-2
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}