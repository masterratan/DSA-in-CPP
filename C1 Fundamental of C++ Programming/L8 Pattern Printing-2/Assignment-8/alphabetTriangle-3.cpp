//       A
//     A B C
//   A B C D E
// A B C D E F G

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
        for(int k=1;k<=2*i-1;k++){
            char ch = 64+k;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}