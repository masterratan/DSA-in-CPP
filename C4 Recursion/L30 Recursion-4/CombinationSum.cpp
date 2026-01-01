// Ques. Combination Sum
// LeetCode #39

#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int> v, int arr[], int n, int tgt, int idx){
    if(tgt == 0){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(tgt < 0) return;
    for(int i=idx; i<n; i++){
        v.push_back(arr[i]);
        combination(v,arr,n,tgt-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector<int> v;
    combination(v,arr,n,target,0);
}

// Note:- We can pass {} in a function as a substitute for empty vector