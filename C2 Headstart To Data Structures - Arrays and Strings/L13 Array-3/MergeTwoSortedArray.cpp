// LeetCode #88
// Merge Two Sorted Arrays

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int>res(m+n);
    int i = 0; // points to arr1
    int j = 0; // points to arr2
    int k = 0; // points to res
    while(i<n and j<m){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j]){
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    // for remaining elements
    if(i==n){ // arr1 ke saare element utha chuke hain
        while(j<m){
            res[k] = arr2[j]; // arr2 ke remaining elements bhare jayenge
            k++;
            j++;
        }
    }
    if(j==m){ // arr2 ke saare element utha chuke hain
        while(i<n){
            res[k] = arr1[i]; // arr1 ke remaining elements bhare jayenge
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);

    vector<int>v = merge(arr1,arr2);

    display(v);
    
}