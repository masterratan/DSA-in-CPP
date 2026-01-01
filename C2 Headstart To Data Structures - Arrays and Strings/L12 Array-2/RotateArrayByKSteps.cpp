#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void reversePart(int i, int j, vector<int>&a){
    while(i<=j){
        // swap
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cout<<"Order Of Rotation: ";
    cin>>k;
    k %= n; // for large values of order of rotation
    reversePart(0,v.size()-1,v);
    reversePart(0,k-1,v);
    reversePart(k,v.size()-1,v);
    display(v);
}