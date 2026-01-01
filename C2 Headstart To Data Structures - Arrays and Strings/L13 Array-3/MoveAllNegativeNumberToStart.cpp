#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        if(v[i] <= 0) i++;
        if(v[j] > 0) j--;
        if(i>j) break;
        if(v[i] > 0 and v[j] < 0){
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
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    display(v);
    cout<<endl;
    sort01(v);
    display(v);
}