#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abdc"; // b = 2, y = 25 -> 2-25 = -23
    string t = "aydc";
    cout<<s.compare(t);

    // 0 if s==t
    // +ve if s>t
    // -ve if s<t
}