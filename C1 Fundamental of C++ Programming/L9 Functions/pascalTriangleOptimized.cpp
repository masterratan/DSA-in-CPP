// Low Time Complexity

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Rows: ";
    cin>>n;
    for(int i=0;i<=n+1;i++){
        for(int k=0;k<=n-1-i;k++){
            cout<<" ";
        }
        int curr = 1;
        for(int j=0;j<i+1;j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}