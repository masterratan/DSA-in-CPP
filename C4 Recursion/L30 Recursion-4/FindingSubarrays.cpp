// Subarrays:- Subsequences which are in continuos fashion

// Iterative Method
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<=n-2; i++){
//         for(int j=i; j<=n-1; j++){
//             for(int k=i; k<=j; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

// Recursive Method
#include<bits/stdc++.h>
using namespace std;
void Subarrays(vector<int>ans, vector<int> v, int idx){
    if(idx == v.size()){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    Subarrays(ans, v, idx+1);
    if(ans.size() == 0 or v[idx-1] == ans[ans.size()-1]){
        ans.push_back(v[idx]);
        Subarrays(ans, v, idx+1);
    }
}
int main(){
    vector<int> v(4,0);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    vector<int>ans;

    Subarrays(ans, v, 0);
}

// Will work in unique elements.
// For duplicate elements iterative method is better.