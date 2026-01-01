#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int ld = 0; // last digit
    for(int i=1;n>0;i++){
        ld = n%10;
        if(ld%2==0) sum += ld;
        n = n/10;
    }
    cout<<"Sum of even digits: "<<sum;
}