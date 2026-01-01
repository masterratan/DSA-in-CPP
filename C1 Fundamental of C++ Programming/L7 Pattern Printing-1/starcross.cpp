// *   *
//  * *
//   *
//  * *
// *   *

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l;j++){
            if((i==j) or (i+j==l+1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}