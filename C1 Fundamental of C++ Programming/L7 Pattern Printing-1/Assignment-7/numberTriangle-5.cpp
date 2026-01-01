//       1
//     2 1
//   3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        // for spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";

        // for digits
        for(int j=1;j<=i;j++) cout<<i-j+1<<" ";

        cout<<endl;
    }
}