// Number Pyramid Palindrome
//     1
//    121
//   12321
//  1234321

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
        // for digits
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        // for digits
        for(int p=1;p<=i-1;p++){
            cout<<i-p;
        }
        cout<<endl;
    }
}