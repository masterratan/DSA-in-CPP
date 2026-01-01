#include<iostream>
using namespace std;
int fac(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product *= i;
    }
    return product;
}
int combination(int n,int r){
    int c = fac(n)/(fac(r)*fac(n-r));
    return c;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<combination(n,r);
}