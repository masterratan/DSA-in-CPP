// Note:- to_string() -> integer to string
//        stoi() -> string to integer
//        stoll() -> string to long long

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "12345";
    int x = stoi(str);
    cout<<x<<endl;

    string s = "1234567891234";
    long long y = stoll(s);
    cout<<y<<endl;
}