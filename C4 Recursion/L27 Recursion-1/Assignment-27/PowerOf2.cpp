// Ques. Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;
bool poweroftwo(int i, int n){
    // base cases
    if(i==n) return 1;
    if(i>n) return 0;

    poweroftwo(2*i, n);
}
int main(){
    int n;
    cin>>n;

    cout<<poweroftwo(1, n);
}

// Method-2

#include<iostream>
using namespace std;
bool poweroftwo(int n){
    // base cases
    if(n == 1) return 1;
    if(n%2 != 0) return 0;

    return poweroftwo(n/2);
}
int main(){
    int n;
    cin>>n;

    cout<<poweroftwo(n);
}