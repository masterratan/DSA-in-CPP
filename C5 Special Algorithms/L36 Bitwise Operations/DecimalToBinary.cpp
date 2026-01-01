#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int n){
    string result = "";
    while(n>0){
        if(n%2 == 0){
            // even
            result = "0" + result;
        }
        else {
            // odd
            result = "1" + result;
        }
        n /= 2;
    }
    return result;
}
int main(){
    int n = 55;
    cout<<decimal_to_binary(n);
}
