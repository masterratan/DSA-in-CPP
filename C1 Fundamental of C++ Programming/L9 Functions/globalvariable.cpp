#include<iostream>
using namespace std;
int a = 9; // global variable
void f(){
    cout<<a<<endl;
}
int main(){
    cout<<a<<endl;
    int a = 2; // local variable
    cout<<a<<endl;
    f();
}

// Priority:- Local Variable > Global Variable
// But the scope of local variable is till local function only.
// To change the global variable:-

#include<iostream>
using namespace std;
int a = 9; // global variable
void f(){
    cout<<a<<endl;
}
int main(){
    a = 2; // global variable ko change kr diya
    cout<<a<<endl;
    f();
}