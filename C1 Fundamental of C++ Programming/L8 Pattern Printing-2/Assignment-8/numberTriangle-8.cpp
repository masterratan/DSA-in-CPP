// Number Pyramid Palindrome

//       1
//     2 1 2
//   3 2 1 2 3
// 4 3 2 1 2 3 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // numbers
        for(int k=1;k<=i;k++){
            cout<<i-k+1<<" ";
        }
        // numbers
        for(int k=1;k<=i-1;k++){
            cout<<k+1<<" ";
        }
        cout<<endl;
    }
}