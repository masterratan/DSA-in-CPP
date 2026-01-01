// Ques. Power Function (Logarithmic)

#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x, n/2);
    
    if(n%2==0) return ans*ans;
    return ans*ans*x;
}
int main(){
    int x,n;
    cout<<"Enter Base: ";
    cin>>x;
    cout<<"Enter Power: ";
    cin>>n;
    cout<<pow(x,n);
}