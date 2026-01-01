// In C++, (Ordered) Set stores values in sorted order by default. [Not unordered set]
// Same applies for map

#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int,int> m;
    m[2] = 20;
    m[1] = 10;
    m[3] = 30;
    for(auto x : m){
        cout<<x.second<<" ";
    }
}