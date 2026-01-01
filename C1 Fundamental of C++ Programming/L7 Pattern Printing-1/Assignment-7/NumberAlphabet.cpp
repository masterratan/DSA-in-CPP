// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        if(i%2!=0){ // number
            for(int j=1;j<=i;j++){
            cout<<j<<" ";
            }
        }
        else{ // alphabet
            for(int j=1;j<=i;j++){
            char ch = j+64;
            cout<<ch<<" ";
            }
        }
        cout<<endl;
    }
}