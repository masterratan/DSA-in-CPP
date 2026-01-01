#include<iostream>
using namespace std;
void startriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    startriangle(a);
    startriangle(b);
    startriangle(c);
}
