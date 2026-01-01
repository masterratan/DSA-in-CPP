#include<iostream>
#include<queue>
using namespace std;
int main(){
    // STL for max Heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);

    cout<<pq.top()<<endl; // greatest element i.e. 81
    pq.pop(); // 81 is removed
    cout<<pq.top()<<endl; // second greatest element i.e. 10

    // STL for min Heap
    priority_queue<int, vector<int>, greater<int>> rs;
    rs.push(10);
    rs.push(2);
    rs.push(-6);
    rs.push(81);

    cout<<rs.top()<<endl; // smallest element i.e. -6
    rs.pop(); // -6 is removed
    cout<<rs.top()<<endl; // second smallest element i.e. 2

    // Problem Identification
    // 1. kth smallest, largest, Top k frequent elements, Closest k elements
    // 2. At any point of time, min/max elements are required
    // 3. Sorting (sometimes) like heap sort
}