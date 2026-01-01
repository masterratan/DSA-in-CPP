// Using Backtracking

#include<bits/stdc++.h>
using namespace std;
void permutations(string &str, int i){
    if(i == str.size()-1) cout<<str<<endl;

    unordered_set<char> s;
    for(int idx = i; idx < str.size(); idx++){
        if(s.count(str[idx])) continue;

        s.insert(str[idx]);
        swap(str[idx],str[i]);
        permutations(str,i+1);
        swap(str[idx],str[i]);
    }
}
int main(){
    string s = "aav";
    permutations(s,0);
}