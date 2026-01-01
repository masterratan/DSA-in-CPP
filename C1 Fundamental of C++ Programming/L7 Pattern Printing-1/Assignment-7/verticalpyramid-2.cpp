//       *
//     * *
//   * * * 
// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    int mid = l/2 + 1;
    for(int i=1;i<=l;i++){
        if(i<=mid){
            // spaces
            for(int j=1;j<=mid-i;j++){
            cout<<"  ";
            }
            // stars
            for(int k=1;k<=i;k++){
            cout<<"* ";
            }
        }
        else{
            // spaces
            for(int j=1;j<=i-mid;j++){
            cout<<"  ";
            }
            // stars
            for(int k=1;k<=l+1-i;k++){
            cout<<"* ";
            }
        }
        cout<<endl;
    }
}