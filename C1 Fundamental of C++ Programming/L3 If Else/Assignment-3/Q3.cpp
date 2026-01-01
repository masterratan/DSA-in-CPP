/*Write a C++ program to input any character and check whether it is the alphabet,
digit or special character.*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
        cout<<"Alphabet";
    }
    else if(ch>='0' and ch<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
}