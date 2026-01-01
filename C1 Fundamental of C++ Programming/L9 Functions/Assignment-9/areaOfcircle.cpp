#include<iostream>
using namespace std;
float PI = 3.1415;
int area(int r){
    return PI*r*r;
}
int main(){
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area = "<<area(r);
}