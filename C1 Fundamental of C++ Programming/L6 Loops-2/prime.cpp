#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    else{
        bool flag = true; // assuming the number to be prime initially
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                flag = false; // the number is composite
                break;
            }
        }
        if(flag==true) cout<<"Prime Number";
        else cout<<"Composite Number";
    }
}