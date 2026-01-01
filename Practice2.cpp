#include<bits/stdc++.h>
using namespace std;
bool flag = false;
int x;
void check(vector<int>& arr, int i, int sum){
    if(flag == true) return;
    if(i >= arr.size()){
        if(sum == x) flag = true;
        return;
    }

    // + krke bhejo
    check(arr,i+1,sum+arr[i]);

    // - krke bhejo
    check(arr,i+1,sum-arr[i]);

}
int main(){
    vector<string> s = {"50","30","34"};
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";

    return 0;
}