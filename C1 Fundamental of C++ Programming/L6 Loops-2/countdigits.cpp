#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    for(int i=1;n>0;i++){
        count++;
        n /= 10;
    }
    cout<<"Number of digits: "<<count;
}