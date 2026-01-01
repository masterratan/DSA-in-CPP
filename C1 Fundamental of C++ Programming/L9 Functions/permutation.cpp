#include<iostream>
using namespace std;
int fac(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product *= i;
    }
    return product;
}
int permutation(int n,int r){
    int p = fac(n)/fac(n-r);
    return p;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<permutation(n,r);
}