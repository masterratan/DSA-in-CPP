#include<iostream>
using namespace std;
int digits(int n){
    int count=0;
    for(int i=1;n>0;i++){
        count++;
        n /= 10;
    }
    return count;
}
int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<square(digits(n));
}