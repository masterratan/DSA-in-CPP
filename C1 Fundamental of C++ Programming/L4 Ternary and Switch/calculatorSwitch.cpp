#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    char ch;
    cin>>ch;
    int b;
    cin>>b;
    switch(ch){
        case '+':
        cout<<a+b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        printf("Invalid Syntax"); 
    }
}