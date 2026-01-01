// n = 4
//       1 
//     2   2 
//   3       3 
// 4           4
//   3       3   
//     2   2
//       1

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
    // lower triangle
    for(int i=2;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==j or i+j==2*n) cout<<n-i+1<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}