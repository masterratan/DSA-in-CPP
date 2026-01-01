// *
// * *
// * * *
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
    int mid = l/2 + 1;
    for(int i=1;i<=l;i++){
        if(i<=mid){ // number
            for(int j=1;j<=i;j++){
            cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=l-i+1;j++){
            cout<<"* ";
        }
        }
        cout<<endl;
    }
}