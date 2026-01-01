// A Joke ;)
// Sort using Heap Sort in Ascending Order


#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,1,2,20,5,8,20};

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int ele : arr) pq.push(ele); // O(n*logn)

    while(pq.size() > 0){ // O(n*logn)
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    // SC => O(n)

    // Or we can use a max heap and print in reverse order
}