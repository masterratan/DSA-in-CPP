// Steps Allowed -> 1,2

// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==2 or n==1) return n;
//     return stair(n-1) + stair(n-2);
// }
// int main(){
//     cout<<stair(7);
// }

// Steps Allowed -> 1,2,3

#include<iostream>
using namespace std;
int stair(int n){
    if(n==3 or n==2 or n==1) return n;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    cout<<stair(4);
}