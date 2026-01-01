#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<"1st Fibonacci Number: 1"<<endl;
    }
    else if(n<=2){
        cout<<"1st Fibonacci Number: 1"<<endl;
        cout<<"2nd Fibonacci Number: 1"<<endl;
    }
    else{
        cout<<"1st Fibonacci Number: 1"<<endl;
        cout<<"2nd Fibonacci Number: 1"<<endl;
        int a=1;
        int b=1;
        int sum=0;
        for(int i=3;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
        cout<<i<<"th Fibonacci Number: "<<sum<<endl;
        }      
    } 
}