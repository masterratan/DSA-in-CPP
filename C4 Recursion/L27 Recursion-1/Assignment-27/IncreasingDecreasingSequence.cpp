#include<iostream>
using namespace std;
void printInDec(int n, int i){
    // base case
    if(i > n) return;

    cout<<i<<" ";
    printInDec(n, i+1);
    if(i > 1) cout<<i-1<<" ";
}
int main(){
    int n;
    cin>>n;

    int i = 1;
    printInDec(n , i);
}

// Method-2

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<" ";
// }
// void print2(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     print2(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     // forward
//     print(n);
//     // backward
//     print2(n-1);
// }
