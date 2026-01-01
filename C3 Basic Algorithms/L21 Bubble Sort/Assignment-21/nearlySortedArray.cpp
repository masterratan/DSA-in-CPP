// Ques. Check if the given array is almost sorted. (elements are at-most one position away)
// Test Cases:- Nearly sorted -> 4 2 7 9 8
//              Not nearly sorted -> 4 2 9 7 8


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {4,2,7,9,8};
//     int n = sizeof(arr)/4;

//     // copy of original array
//     int brr[n];
//     for(int i=0;i<n;i++) brr[i] = arr[i];

//     // sorting duplicate array
//     for(int i=0; i<n-1; i++){ // n-1 passes
//         bool flag = true;
//         for(int j=0; j<=n-1-i; j++){
//             if(brr[j]>brr[j+1]){
//                 swap(brr[j],brr[j+1]);
//                 flag = false; // abhi tk sort nhi hua hai
//             }
//         }
//         if(flag) break;
//     }
//     // arr 4 2 7 9 8
//     // brr 2 4 7 8 9

//     // comparing with original array for one position error
//     bool flag = true; // assuming nearly sorted array initially
//     for(int i=0; i<n; i++){
//        if(i==0){
//             if(arr[i] != brr[i] and arr[i] != brr[i+1]){
//                 flag = false;
//                 break;
//             }
//        }
//        else if(i==n-1){
//             if(arr[i] != brr[i] and arr[i] != brr[i-1]){
//                 flag = false;
//                 break;
//             }
//        }
//        else {
//             if(arr[i] != brr[i-1] and arr[i] != brr[i] and arr[i] != brr[i+1]){
//                 flag = false;
//                 break;
//             }
//        }
//     }

//     // result
//     if(flag) cout<<"Nearly sorted array!";
//     else cout<<"Not a nearly sorted array!";

// }


// Method-2: Without using extra space [ Time Complexity -> O(1) ]

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8};
    int n = sizeof(arr)/4;

    bool flag = true;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(arr[i] < arr[j]) count++;
        }
        // means arr[i] se bade 'count' elements hai
        // therefore, correct postion of arr[i] hoga
        int correctposition = n - count - 1;

        if(abs(correctposition - i) > 1){
            flag = false;
            break;
        }
    }

    // result
    if(flag) cout<<"Nearly sorted array!";
    else cout<<"Not a nearly sorted array!";

}