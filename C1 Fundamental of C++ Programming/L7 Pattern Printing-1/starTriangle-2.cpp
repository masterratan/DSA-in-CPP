//    *
//   **
//  *** 
// **** 

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        // spaces
        for(int j=1;j<=l-i;j++){
            cout<<" ";
        }
        // stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}