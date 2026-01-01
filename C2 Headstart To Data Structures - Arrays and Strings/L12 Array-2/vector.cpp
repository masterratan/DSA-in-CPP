// Vector -> replacement of array
//        -> It is a dynamic array
// Syntax -> vector <int> arr;
// Working -> To add a new element, Vector make a new array which is of double the size of original array, 
//            and then copy paste the content of original array in it till half, and after that it start
//            filling new elements.
// Basic Operations -> push_back, pop_back, size, capacity, at, sort

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention the size
    // inserting / input do not use [] untill and unless you have mentioned size of vector
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    // if you want to update / access you can use []
    v[0] = 88;
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}