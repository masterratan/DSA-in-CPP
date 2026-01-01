// Using Inbuilt function

// #include<iostream>
// using namespace std;
// int count_set_bits(int n){
//     return __builtin_popcount(n);
// }
// int main(){
//     for(int i=1; i<=20; i++){
//         cout<<i<<" - "<<count_set_bits(i)<<endl;
//     }
// }

// Without using Inbuilt function
// Using Brian Kernighan Algorithm

#include<iostream>
using namespace std;
int count_set_bits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    for(int i=1; i<=20; i++){
        cout<<i<<" - "<<count_set_bits(i)<<endl;
    }
}