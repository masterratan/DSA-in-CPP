// Ques. First negative number in every window of size k

// Brute Force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
//     // ans[] = {-3,-3,-7,-7,-7,-1,-2}
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     vector<int> ans;

//     for(int i=0; i<=n-k; i++){
//         for(int j=i; j<i+k; j++){
//             if(arr[j] < 0){
//                 ans.push_back(arr[j]);
//                 break;
//             }
//         } 
//     }

//     for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
// }

// Sliding Window
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    // ans[] = {-3,-3,-7,-7,-7,-1,-2}
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    vector<int> ans(n-k+1);
    
    int p = -1; // previous negative index
    for(int i=0; i<k; i++){
        if(arr[i]<0){
            p = i;
            break;
        }
    }
    if(p == -1) ans[0] = 1;
    else ans[0] = arr[p];

    // sliding window
    int i = 1;
    int j = k;
    while(j < n){ // tno = n-k
        if(p >= i) ans[i] = arr[p];
        else {
            p = -1;
            for(int x=i; x<=j; x++){
                if(arr[x]<0){
                    p = x;
                    break;
                }
            }
            if(p != -1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
}