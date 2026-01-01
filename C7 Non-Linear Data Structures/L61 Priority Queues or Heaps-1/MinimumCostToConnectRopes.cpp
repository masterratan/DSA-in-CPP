// Minimum Cost to Connect all Ropes
// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

// Hint:- Same question as Last Stone Weight, only difference is to take two minimum length ropes at a 
//        time and connect them.

int minCost(vector<int>& arr) {
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    for(int i=0; i<arr.size(); i++) pq.push(arr[i]);
    int cost = 0;
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        
        int y = pq.top();
        pq.pop();
        
        cost += (x+y);
        pq.push(x+y);
    }
    return cost;
}