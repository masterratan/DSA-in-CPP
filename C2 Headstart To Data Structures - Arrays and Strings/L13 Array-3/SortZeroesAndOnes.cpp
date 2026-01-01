#include<iostream>
#include<vector>
using namespace std;

// Method-1: Two Pass Method 
// Time Complexiety -> O(2n) -> O(n) { We travel 2 times through the array }

void sort01(vector<int>&v){
    int n = v.size();
    int no0 = 0; // Number of 0's
    int no1 = 0; // Number of 1's
    for(int i=0;i<n;i++){
        if(v[i] == 0) no0++;
        else no1++;
    }
    for(int i=0;i<n;i++){
        if(i < no0) v[i] = 0;
        else v[i] = 1;
    }
}

// Method-2: Two Pointers Method 
// Time Complexiety -> O(n) { We travel 1 time through the array }

void sort01(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        if(i>j) break;
        if(v[i] == 1 and v[j] == 0){
            // swap
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    cout<<endl;
    sort01(v);
    display(v);
}