// Practice: Calculating sum of digits using recursion

// My Code
#include<iostream>
using namespace std;
int Digits(int sum, int n){
    if(n == 0) return sum;
    return Digits(sum + n%10, n/10);
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<Digits(0,n);
}

// Ma'am's Code
#include<iostream>
using namespace std;
int sum(int n){
    // base case
    if(n>=0 and n<=9) return n;
    return n%10 + sum(n/10);
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<sum(n);
}