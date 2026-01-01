// Greatest Common Divisor

// Iterative Method
#include<bits/stdc++.h>
using namespace std;
int GCD(int x, int y){
    for(int i=min(x,y); i>=2; i--){
        if(x%i == 0 and y%i == 0) return i; // TC -> O(min(x,y))
    }
    return 1;
}
int main(){
    int x = 24;
    int y = 60;
    cout<<GCD(x, y);
}

// Recursive Method
#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b){
    if(b%a == 0) return a;
    return HCF(b%a, a); // Repeated division method for finding HCF, until remainder is zero
}
int main(){
    int x = 24;
    int y = 80;
    cout<<HCF(min(x,y), max(x,y));
    // this is also correct, HCF(x,y) or HCF(y,x)
    // order doesn't matter since if(x>y) after one operation HCF(x,y) will become HCF(y,x)
}

// TC of HCF(a,b) is O(log(a+b))