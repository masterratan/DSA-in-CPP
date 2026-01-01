// #include<iostream>
// using namespace std;
// int rev(int n, int k){
//     if(n==0) return k;
//     return rev(n/10, k*10 + n%10);
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<rev(n,0);
// }

#include<iostream>
using namespace std;
int rev(int n){
    static int ans = 0;

    //base case
    if(n <= 0) return ans;
    int dig = n%10;
    ans = ans*10 + dig;

    return rev(n/10);
}
int main(){
    int n;
    cin>>n;

    cout<<rev(n)<<endl;
}

// static -> The variable declared with static won't get redeclared with function calls, neither redefined.