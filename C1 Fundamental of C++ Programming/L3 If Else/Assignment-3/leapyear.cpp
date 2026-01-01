#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year: ";
    cin>>n;
    if(n%400==0) cout<<"Leap Year";
    else if(n%100==0) cout<<"Non-Leap Year";
    else if(n%4==0) cout<<"Leap Year";
    else cout<<"Non-Leap Year";
}