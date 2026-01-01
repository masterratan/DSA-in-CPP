// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length & breadth: ";
    cin>>l>>b;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=b;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}