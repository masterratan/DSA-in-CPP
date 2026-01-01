// Ques. Generate all binary strings of length n
// #include<bits/stdc++.h>
// using namespace std;
// void BinaryStrings(string s, int n){
//     if(s.size() == n){
//         cout<<s<<endl;
//         return;
//     }
//     BinaryStrings(s + '0', n);
//     BinaryStrings(s + '1', n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     BinaryStrings("", n);
// }


// Follow up: Generate all binary strings of length n without consecutive n
#include<bits/stdc++.h>
using namespace std;
void BinaryStrings(string s, int n){
    if(s.size() == n){
        cout<<s<<endl;
        return;
    }
    BinaryStrings(s + '0', n);
    if(s.size() == 0 or s[s.size()-1] != '1') BinaryStrings(s + '1', n);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    BinaryStrings("", n);
}