// Alphabet Pyramid Palindrome

//       A
//     B A B
//   C B A B C
// D C B A B C D

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
        // alphabets
        for(int k=1;k<=i;k++){
            char ch = 64 + (i-k+1);
            cout<<ch<<" ";
        }
        // alphabets
        for(int k=1;k<=i-1;k++){
            char ch = 64 + (k+1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}