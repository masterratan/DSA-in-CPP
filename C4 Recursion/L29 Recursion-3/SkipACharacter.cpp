// Remove a number from a vector
// Eg. Remove all 1 from v[] = {1,2,3,1,1,4,1,7}

#include<iostream>
#include<vector>
using namespace std;
void removeNum(vector<int>& ans, vector<int>& v, int idx){
    if(idx == v.size()){
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        return;
    }
    if(v[idx] != 1) ans.push_back(v[idx]);
    removeNum(ans, v, idx+1);
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(1);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    
    vector<int> ans;
    removeNum(ans,v,0);
}