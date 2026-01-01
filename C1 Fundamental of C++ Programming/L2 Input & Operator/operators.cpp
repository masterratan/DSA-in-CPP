#include<iostream>
using namespace std;
int main(){
    int x = 3;
    cout<<(x=7); // Output will be '7'
}

/*This code is same as*/

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    x = 7;
    cout<<x;
}