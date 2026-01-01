// Move all zeroes to the end of the array. (Relative order must not be disturbed)

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin>>a[i];

    int j=0;
    for(int i = 0; i<n ; i++){
        if(a[i] != 0){
            swap(a[i] , a[j]);
            j++;
        }
    }

    display(a);
}