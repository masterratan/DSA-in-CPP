#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Master Ratan is a great man in his life time.";
    // cout<<str;
    string name;
    // cin>>name; // Only when the string has no spaces
    getline(cin,name); // VVIMP
    cout<<name;
}