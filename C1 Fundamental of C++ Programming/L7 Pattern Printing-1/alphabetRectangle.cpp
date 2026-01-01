// A B C D
// A B C D
// A B C D
// A B C D

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l;j++){
            char ch=64+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}