#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int* ptr = &a;
    int b = ++(*ptr); // pre increment
    cout<<a<<" "<<b<<endl;;
    int c = (*ptr)++; // post increment
    cout<<a<<" "<<c;
}