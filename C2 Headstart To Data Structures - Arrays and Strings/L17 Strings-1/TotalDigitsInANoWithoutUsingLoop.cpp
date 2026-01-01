// Ques. Return the total number of digits in a number without using any loop.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string s = to_string(n);
    cout<<"No. of Digits = "<<s.size();
}