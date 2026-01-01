/* Display this GP uptil n terms:- 3,12,48,...*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a = 3; // first term
    int r = 4; // common ratio
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a *= r;
    }
}