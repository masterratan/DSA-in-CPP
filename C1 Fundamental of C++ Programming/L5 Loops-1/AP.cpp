// Display this AP:- 1,3,5,7,9...upto 'n' terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<2*i-1<<" ";
    }
}