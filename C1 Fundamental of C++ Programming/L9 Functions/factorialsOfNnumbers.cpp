#include<iostream>
using namespace std;
int fac(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product *= i;
    }
    return product;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<"! = "<<fac(i)<<endl;
    }
}