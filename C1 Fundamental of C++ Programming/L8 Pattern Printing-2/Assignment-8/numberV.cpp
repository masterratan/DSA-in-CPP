// n = 4
//    1 
//   2 2 
//  3   3 
// 4     4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cout<<"  ";
    }
    cout<<"1 ";
    cout<<endl;
    // upper triangle
    for(int i=2;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";
        cout<<i<<" ";
        for(int j=1;j<=2*(i-1)-1;j++) cout<<"  ";
        cout<<i<<" ";
        cout<<endl;
    }
}