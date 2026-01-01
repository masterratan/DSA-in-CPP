#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter a number: ";
    cin>>n;
    int x = n; // x will store integral part of n
    if(n>=0){
        cout<<x;
    }
    else{
        // fractional part of n;
        float k = n - x;
        if(k==0) cout<<x; // means n is a negative integer
        else cout<<x-1;
    }
}