// Merge Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& ans){
    int i=0; // corresponds to vector a
    int j=0; // corresponds to vector b
    int k=0; // corresponds to vector ans
    while(i<a.size() and j<b.size()){
        if(a[i] <= b[j]) ans[k++] = a[i++];
        else ans[k++] = b[j++];
    }
    while(j != b.size()){
        ans[k++] = b[j++];
    }
    while(i != a.size()){
        ans[k++] = a[i++];
    }
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n == 1) return;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int> a(n1),b(n2);

    // Step-1: Copy Pasting
    for(int i=0; i<n1; i++) a[i] = v[i];
    for(int i=0; i<n2; i++) b[i] = v[i+n1];

    // Step-2: Recursion
    mergeSort(a);
    mergeSort(b);

    // Step-3: Merging
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {77,88,-101,-0,206,899};
    int n = sizeof(arr)/sizeof(arr+n);
    vector<int> v(arr,arr+n);

    mergeSort(v);

    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}
