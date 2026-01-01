// Find the kth smallest element in a given array.

// Note:- Use MaxHeap for smallest element.

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kthSmallest(vector<int> arr, int k){
    int n = arr.size();
    priority_queue<int> pq; // maxheap

    for(int i=0; i<n; i++){ // n
        pq.push(arr[i]); // logk
        if(pq.size()>k) pq.pop(); // logk
    }

    return pq.top();

    // TC => O(nlogk)
    // SC => O(n) // total space
    // Auxilary Space (Extra Space Used)
    // AS => O(k)
}

int main(){
    vector<int> v = {10,20,-4,5,18,24,1,-7,56};
    int k = 4; // answer should be 5
    
    cout<<kthSmallest(v, k);

    return 0;
}