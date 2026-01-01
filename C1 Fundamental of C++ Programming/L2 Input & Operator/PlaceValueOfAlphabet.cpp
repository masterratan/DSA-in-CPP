#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a alphabet: "; // Input must be in UPPERCASE
    cin>>ch;
    int pv = (int)ch - 64; // place value
    cout<<"Place Value: "<<pv;
}