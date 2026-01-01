#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    if(a==0 and b==0) cout<<"Undefined";
    else if(b>=0){
        int power=1;
        for(int i=1; i<=b;i++){
        power *= a;
        }
        cout<<a<<" raised to the power "<<b<<" is equal to "<<power;
    }
    else{
        b = -b;
        int power=1;
        for(int i=1; i<=b;i++){
        power *= a;
        }
        cout<<a<<" raised to the power "<<b<<" is equal to 1/"<<power;
    }    
}