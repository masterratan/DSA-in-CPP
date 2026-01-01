// Given n string consisting of digits from 0 to 9. Return the index of string which has
// maximum value. (Take 0 based indexing)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s;
    s.push_back("0123");
    s.push_back("0023");
    s.push_back("456");
    s.push_back("00182");
    s.push_back("940");
    s.push_back("2901");

    vector<int>v;
    for(int i=0;i<s.size();i++){
        int k = stoi(s[i]);
        v.push_back(k);
    }
    int max = INT_MIN;
    int idx = -1;
    for(int i=0;i<v.size();i++){
        if(max < v[i]){
            idx = i;
            max = v[i];
        }
    }
    cout<<idx<<endl<<s[idx]<<endl<<v[idx];
}