#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<"^2 = "<<square(i)<<endl;
    }
}