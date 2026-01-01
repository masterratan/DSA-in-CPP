// Meeting Room I
// LeetCode #251

// LeetCode Premium
// Simple Intution:- If "only room is required for all the meeting" (means there is no overlapping meeting)
// then a person can attend all the meeting.

#include<bits/stdc++.h>
using namespace std;
bool canAttendMeetings(vector<vector<int>> &arr) {
    if(arr.size() == 0) return true; // if there is no meeting he can attend
    int n = arr.size();
    vector<int> start, end;
    for(int i=0; i<n; i++){
        start.push_back(arr[i][0]);
        end.push_back(arr[i][1]);
    }

    sort(start.begin(),start.end());
    sort(end.begin(),end.end());

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

    return ans == 1;
}

int main(){
    vector<vector<int>> intervals = {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<minMeetingRooms(intervals);

    return 0;
}