//     *
//    ***
//   *****
//  *******

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=n;i++){
        // for spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            nsp--;
        }
        // for stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
            nst += 2;
        }
        cout<<endl;
    }
}