// WAP to find the largest three elements in the array.

#include<iostream>
#include<vector>
#include<climits>
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
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    // METHOD-1
    for(int i=0;i<v.size();i++){
        if(max1 < v[i]){
            max3 = max2;
            max2 = max1;
            max1 = v[i];
        }
    }
    // METHOD-2
    for(int i=0;i<v.size();i++){
        if(max1 < v[i]) max1 = v[i];
    }
    for(int i=0;i<v.size();i++){
        if(max1 != v[i] and max2 < v[i]) max2 = v[i];
    }
    for(int i=0;i<v.size();i++){
        if(max1 != v[i] and max2 != v[i] and max3 < v[i]) max3 = v[i];
    }
    cout<<"Largest Three Numbers: "<<endl<<max1<<endl<<max2<<endl<<max3;
}