// * * * * *  rows -> length
// *       *  columns -> breadth
// *       *
// * * * * *

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length & breadth: ";
    cin>>l>>b;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=b;j++){
            if(i==1 or i==l or j==1 or j==b) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}