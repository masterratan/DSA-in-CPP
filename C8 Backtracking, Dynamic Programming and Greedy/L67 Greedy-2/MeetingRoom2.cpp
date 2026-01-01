// Meeting Rooms II
// LeetCode #253

// LeetCode Premium
// Can be accessed by typing meeting room ii lintcode on google

// https://www.lintcode.com/problem/919/?fromId=203&_from=collection

// Input: intervals = [(0,30),(5,10),(15,20)]
// Output: 2
// Explanation:
// We need two meeting rooms
// room1: (0,30)
// room2: (5,10),(15,20)

#include<bits/stdc++.h>
using namespace std;
// Time: O(nlogn)    Space: O(n)
int minMeetingRooms(vector<vector<int>> &arr) { // [(1,10),(2,7),(3,19),(8,12),(10,20),(11,30)]
    int n = arr.size(); // 6
    vector<int> start, end;
    for(int i=0; i<n; i++){
        start.push_back(arr[i][0]); // 1 2 3 8 10 11
        end.push_back(arr[i][1]); // 10 7 19 12 20 30
    }

    sort(start.begin(),start.end()); // 1 2 3 8 10 11
    sort(end.begin(),end.end()); // 7 10 12 19 20 30

    int ans=0, rooms=0;
    int i=0, j=0;
    while(i<start.size() && j<end.size()){
        if(start[i] < end[j]){
            rooms++; // nya room liya gya
            ans = max(ans,rooms);
            i++;
        }
        else if(start[i] > end[j]){
            rooms--; // room khali hogya
            j++;
        }
        else { // start[i] == end[j]
            // rooms--; room++; // room khali hua aur turant book hogya
            i++;
            j++; 
        }
    }

    return ans;
}

int main(){
    // Test Cases
    // Input => {{0,30},{5,10},{15,20}} Output => 2
    // Input => {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}} Output => 2

    vector<vector<int>> intervals = {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<minMeetingRooms(intervals);

    return 0;
}