// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}