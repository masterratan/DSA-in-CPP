#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx,length)
    cout<<s.substr(0)<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2)<<endl;

    cout<<endl<<s.substr(2,2)<<endl; 
}