#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not a Three Digit Number";
    }
}