#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Sides of Triangle: ";
    cin>>a>>b>>c;
    if(a==b and b==c){
        cout<<"Equilateral Triangle";
    }
    else if(a!=b and b!=c and c!=a){
        cout<<"Scalene Triangle";
    }
    else if((a==b and b!=c) || (a==c and c!=b) || (b==c and c!=a)){
        cout<<"Isosceles Triangle";
    }
}