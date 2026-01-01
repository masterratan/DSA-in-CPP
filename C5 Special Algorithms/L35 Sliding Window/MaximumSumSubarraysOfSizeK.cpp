// Brute Force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int maxSum = INT_MIN;
//     int maxIdx = -1;
//     for(int i=0; i<=n-k; i++){ // total no. of ops = n-k+1
//         int sum = 0;
//         for(int j=i; j<i+k; j++){ // total no. of ops = k 
//             sum += arr[j];
//         }
//         if(sum > maxSum){
//             maxSum = sum;
//             maxIdx = i;
//         }
//     }
//     cout<<maxSum<<endl<<maxIdx;

//     // tno = (n-k+1)*k
//     // Time Complexity = O(k*n)
// }

// Using Sliding Window Algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    int sum = 0;
    for(int i=0; i<k; i++) sum += arr[i]; // tno = k
    int maxSum = sum;
    int maxIdx = 0;
    
    // sliding window
    int i = 1;
    int j = k;
    while(j < n){ // tno = n-k
        sum = sum + arr[j] - arr[i-1];
        if(sum > maxSum){
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl<<maxIdx;
    
    // Time Complexity = O(n)
}