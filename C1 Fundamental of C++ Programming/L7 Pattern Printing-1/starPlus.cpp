//   *
//   *
// ***** 
//   * 
//   * 

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    int mid = l/2 + 1;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l;j++){
            if(i==mid or j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}