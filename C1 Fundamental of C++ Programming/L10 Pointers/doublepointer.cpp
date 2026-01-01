#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr; // double pointer is used to store address of a single pointer
    cout<<x<<endl; // x
    cout<<ptr<<endl; // x ka address (0x61ff08)
    cout<<p<<endl; // ptr ka address (0x61ff04)
}