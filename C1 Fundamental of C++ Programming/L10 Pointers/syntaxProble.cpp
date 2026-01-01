#include<iostream>
using namespace std;
int main(){
    int x = 12, y = 10;
    // int* p1 = &x, p2 = &y; // This is wrong
    int* p1 = &x, p2 = y; // This is right

    // Note:- Always declare pointers in separate line.
    // Kyu hi faltu ke pange lene?
}