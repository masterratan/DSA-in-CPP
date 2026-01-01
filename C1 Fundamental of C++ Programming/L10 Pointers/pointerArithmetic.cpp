#include<iostream>
using namespace std;
int main(){
    // int x=7;
    // int* ptr = &x;
    // cout<<ptr<<endl; // 0x61ff08
    // ptr = ptr + 1;
    // cout<<ptr<<endl; // 0x61ff0c

    // Hexadecimal System:-
    // 0 1 2 3 4 5 6 7 8 9 a b c d e f

    // we are moving from 8 to c (4 bytes)

    int y = 4;
    int* ptr = &y;
    cout<<*ptr<<endl; // 0x61ff08
    *ptr = *ptr + 1;
    // Or, (*ptr)++;
    cout<<ptr<<endl; // 0x61ff0c
}