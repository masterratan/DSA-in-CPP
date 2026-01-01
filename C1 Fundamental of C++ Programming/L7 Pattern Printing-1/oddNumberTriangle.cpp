// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}