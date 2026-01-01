#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Sides of Triangle: ";
    cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<","<<b<<","<<c<<" can be sides of a triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}