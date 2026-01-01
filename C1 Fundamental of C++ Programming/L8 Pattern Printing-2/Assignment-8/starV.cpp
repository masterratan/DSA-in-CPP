// n = 5                n = 4
// *       *            *     *
//  *     *              *   *
//   *   *                * *
//    * *                  *
//     *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==j or i+j==2*n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}