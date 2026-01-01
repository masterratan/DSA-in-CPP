// n = 4
//       * 
//     *   * 
//   *       * 
// *           *
//   *       *   
//     *   *
//       *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cout<<"  ";
    }
    cout<<"* ";
    cout<<endl;
    // upper triangle
    for(int i=2;i<=n-1;i++){
        // spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";
        cout<<"* ";
        for(int j=1;j<=2*(i-1)-1;j++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }
    // lower triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==j or i+j==2*n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}