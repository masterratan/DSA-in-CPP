// #include<iostream>
// using namespace std;
// void add(int sum, int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     add(sum+n , n-1);
// }
// int main(){
//     add(0,10);
// }

// Method-2

#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    cout<<sum(10);
}