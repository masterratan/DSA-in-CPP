#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x; 
    int* p2 = &y;
    cout<<"Enter two numbers: ";
    cin>>*p1>>*p2;
    cout<<"Sum = "<<*p1 + *p2;
    // Note:- *p1 is same as x and *p2 is same as y
}