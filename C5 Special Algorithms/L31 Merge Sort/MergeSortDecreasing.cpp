#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i = 0; // a
    int j = 0; // b
    int k = 0; // res
    while(i<a.size() and j<b.size()){
        if(a[i] >= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while(j<b.size()){
        res[k++] = b[j++];
    }
    while(i<a.size()){
        res[k++] = a[i++];
    }

}
void mergeSortDescending(vector<int>& v){
    int n = v.size(); // 5,1,3,0,4,9,6
    if(n == 1) return;
    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);

    // copy pasting
    for(int i=0; i<n1; i++) a[i] = v[i]; // 5,1,3
    for(int i=0; i<n2; i++) b[i] = v[i+n1]; // 0,4,9,6

    // magic aka recursion
    mergeSortDescending(a);
    mergeSortDescending(b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    display(v);
    mergeSortDescending(v);
    display(v);
}