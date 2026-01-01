#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter Binary: ";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int sum = 0;
    int x = 1;
    for(int i = v.size()-1;i>=0;i--){
        sum += v[i] * x;
        x *= 2;
    }
    cout<<"Decimal: "<<sum;
}