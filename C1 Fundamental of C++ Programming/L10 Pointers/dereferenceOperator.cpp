#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int* p = &x;
    cout<<x<<endl;
    *p = 6; // we can change the value of x using pointers
    cout<<x; // Note:- *p is same as x
}