// A
// A B
// A B C
// A B C D 

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            char ch = j+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}