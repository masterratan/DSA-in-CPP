// 1234567
// 123 567
// 12   67
// 1     7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    // upper line
    for(int i=1;i<=2*n-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int nst1 = n-1;
    int nst2 = n-1;
    int nsp = 1;
    for(int i=1;i<=n;i++){
        // for numbers
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
            nst1--;
        }
        // for spaces
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
            nsp+=2;
        }
        // for numbers
        for(int j=4+i;j<=2*n-1;j++){
            cout<<j<<" ";
            nst2--;
        }
        cout<<endl;
    }
}