#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // string str = "Master Ratan is a great man in his life time.";
    // cout<<str.size(); // Or, cout<<str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;
    // str.pop_back();
    // str.pop_back();
    // cout<<str<<endl;

    // string s = "abc";
    // string p = "def";
    // s = s + p; // Or, s = s + "def"
    // cout<<s<<endl;
    // s = "xyz" + p;
    // cout<<s<<endl;

    // string s = "abcdef";
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;

    string str = "ABCDEFGH";
    cout<<str<<endl;
    // we want to reverse from 2nd index to 6th index
    reverse(str.begin()+2,str.begin()+7);
    // Or, reverse(str.begin()+2,str.end()-1);
    cout<<str<<endl;
}