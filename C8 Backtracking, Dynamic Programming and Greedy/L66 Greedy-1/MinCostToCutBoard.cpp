// Problem 1: Minimum Cost to cut a board into squares.
// Aboard of length M and width N is given. The task is to break this board into M*N squares such that cost of breaking is minimum. The cutting cost
// for each edge will be given for the board in two arrays X[] and Y[]. In short, you need to choose such a sequence of cutting such that cost is 
// minimized. Return the minimized cost.

// Input:
// M = 6, N = 4
// X[] = {2,1,3,1,4}
// Y[] = {4,1,2}
// Output: 42

// Intuition:
// Total Cost = Total Cost + Edge Cost * Total Pieces

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(int x, int y){
    return x > y;
}

ll minCostToBreakGrid(int n, int m, vector<ll> &vertical, vector<ll> &horizontal){
    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);
    int hz = 1;
    int vr = 1;
    int h = 0, v = 0;
    ll ans = 0;
    while(h < horizontal.size() and v < vertical.size()){
        if(vertical[v] > horizontal[h]){
            ans += vertical[v]*vr;
            hz++;

            v++;
        }
        else{
            ans += horizontal[h]*hz;
            vr++;

            h++;
        }
    }
    while(h < horizontal.size()){
        ans += horizontal[h]*hz;
        vr++;

        h++;
    }
    while(v < vertical.size()){
        ans += vertical[v]*vr;
        hz++;

        v++;
    }
    return ans;
}

int main(){

    int n, m;
    cin>>n>>m;
    vector<ll> horizontal, vertical;
    for(int i=0; i<m-1; i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<minCostToBreakGrid(n, m, vertical, horizontal)<<endl;

    return 0;
}