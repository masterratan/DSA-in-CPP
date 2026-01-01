#include<iostream>
using namespace std;
void odd(int a,int b){
    for(int i=min(a,b)+1;i<max(a,b);i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;   
    odd(a,b);
}