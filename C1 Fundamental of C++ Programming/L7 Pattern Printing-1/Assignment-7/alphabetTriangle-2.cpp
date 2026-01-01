//       A
//     A B
//   A B C
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        // for spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";

        // for alphabets
        for(int j=1;j<=i;j++){
            char ch = j+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}