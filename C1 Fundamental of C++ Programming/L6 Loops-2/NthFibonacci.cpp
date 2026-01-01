#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1 or n==2){
        cout<<n<<"th Fibonacci Number: 1";
    }
    else{
        int a=1;
        int b=1;
        int sum=0;
        for(int i=3;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
        }
        cout<<n<<"th Fibonacci Number: "<<sum;
    } 
}