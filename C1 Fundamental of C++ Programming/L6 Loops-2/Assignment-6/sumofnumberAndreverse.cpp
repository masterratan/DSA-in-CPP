#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int orgNum = n;
    int ld = 0; // last digit
    int r = 0; // reverse number
    for(int i=1;n>0;i++){
        r *= 10;
        ld = n%10;
        r += ld;
        n /= 10;
    }
    int sum = orgNum + r;
    cout<<"Sum of number & its reverse: "<<sum;
}