/*WAP to find the difference between ASCII of two characters, take them as input*/

#include<iostream>
using namespace std;
int main(){
    char a,b;
    cout<<"Enter First Character: ";
    cin>>a;
    cout<<"Enter Second Character: ";
    cin>>b;
    int diff = (int)a - (int)b;
    cout<<"The Difference of ASCII Value is: "<<diff;
}