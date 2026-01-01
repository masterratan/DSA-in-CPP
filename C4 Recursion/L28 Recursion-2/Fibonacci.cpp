#include<iostream>
using namespace std;
int fibo(int n){
    // base case
    if(n==2 or n==1) return 1;
    return fibo(n-2) + fibo(n-1);
}
int main(){
    // 1 1 2 3 5 8 13 21 34
    int n;
    cout<<"Which Term ?"<<endl;
    cin>>n;

    cout<<fibo(n);
}