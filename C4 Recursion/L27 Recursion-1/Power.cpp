// Ques. Make a function which calculates 'a' raised to the power 'b' using recursion.

#include<iostream>
using namespace std;
int pow(int a, int b){
    // for 0 raised to the power 0 or, 0 raised to the power something
    if(a==0 && b==0){
        cout<<"Not defined!";
        return -100;
    }
    else if(a==0) return 0;

    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    cout<<pow(a,b);
}