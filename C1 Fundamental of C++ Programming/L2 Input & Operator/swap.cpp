#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;   
    // METHOD-1: Using an extra variable
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
    // METHOD-2: Without using an extra variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}