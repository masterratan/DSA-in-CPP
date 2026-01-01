// Iterative Method
// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string s){
//     bool flag = true;

//     int i = 0;
//     int j = s.size()-1;
//     while(i <= j){
//         if(s[i] != s[j]){
//             flag = false;
//             break;
//         }
//         i++;
//         j--;
//     }

//     return flag;
// }
// int main(){
//     string s = "racecar";
//     cout<<isPalindrome(s);
// }

// Recursive Method
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i, int j){
    if(i > j) return true;
    if(s[i] != s[j]) return false;
    return isPalindrome(s, i+1, j-1);
}
int main(){
    string s = "racecar";
    cout<<isPalindrome(s, 0, s.size()-1);
}