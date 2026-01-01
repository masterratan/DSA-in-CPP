//    * * * *
//   * * * *
//  * * * *
// * * * *

// Trick:- hr row mein (n-i)th spaces ke baad n stars print krna hi krna hai

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        // for spaces
        for(int j=1;j<=n-i;j++) cout<<"  ";

        // for stars
        for(int j=1;j<=n;j++) cout<<"* ";

        cout<<endl;
    }
}