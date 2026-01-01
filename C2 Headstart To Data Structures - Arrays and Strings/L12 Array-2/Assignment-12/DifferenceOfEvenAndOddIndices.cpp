// Find the difference between the sum of elements at even indices to sum of elements
// at odd indices.

#include<iostream>
#include<vector>
using namespace std;
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
    int sumeven = 0;
    for(int i=0;i<v.size();i=i+2){
        sumeven += v[i];
    }
    int sumodd = 0;
    for(int i=1;i<v.size();i=i+2){
        sumodd += v[i];
    }
    cout<<"Difference is: "<<abs(sumodd-sumeven);
}
