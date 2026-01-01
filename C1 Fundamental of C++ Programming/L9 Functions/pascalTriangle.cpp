// High Time Complexity

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
    int c = fac(n) / (fac(r) * fac(n-r));
    return c;
}
int main(){
    int n;
    cout<<"Enter Rows: ";
    cin>>n;
    for(int i=0;i<=n+1;i++){
        // spaces
        for(int k=0;k<=n-1-i;k++){
            cout<<" ";
        }
        // numbers
        for(int j=0;j<i+1;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}