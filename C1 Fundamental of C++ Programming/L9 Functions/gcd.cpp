#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 and b%i==0){
            hcf=i;
        }       
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b);
}

// METHOD-2 More Optimised

#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 and b%i==0){
            hcf=i;
            break;
        }       
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b);
}