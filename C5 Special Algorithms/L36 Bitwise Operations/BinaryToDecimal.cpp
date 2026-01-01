// #include<bits/stdc++.h>
// using namespace std;
// int powerOf2(int n){
//     int ans = 1;
//     for(int i=1; i<=n; i++) ans *= 2;
//     return ans;
// }
// int binary_to_decimal(string &binary){
//     int n = binary.size();
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         if(binary[i]=='1') sum += powerOf2(n-i-1);
//     }
//     return sum;
// }
// int main(){
//     string s = "00110101";

//     cout<<binary_to_decimal(s);
// }

// Using Left Shift Operator "<<"

#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(string &binary){
    int n = binary.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        if(binary[i]=='1') sum += 1<<(n-i-1); // same as 1*2^(n-i-1)
    }
    return sum;
}
int main(){
    string s = "001101001";
    cout<<binary_to_decimal(s);
}