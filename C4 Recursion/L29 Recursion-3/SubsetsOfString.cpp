// Print subsets of a string with unique characters.
// Follow up: Do it for array as well

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void printSubset(string ans, string original){
//     if(original == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch, original.substr(1)); // ek me append krna hai
//     printSubset(ans, original.substr(1)); // ek me nhi krna
// }
// int main(){
//     string str = "abc";
//     printSubset("",str);
// }

// If we have to store these value in a vector

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v){
    if(original == ""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans+ch, original.substr(1),v); // ek me append krna hai
    storeSubset(ans, original.substr(1),v); // ek me nhi krna
}
int main(){
    string str = "abc";
    vector<string> v;
    storeSubset("",str,v);

    for(string ele : v){
        cout<<ele<<endl;
    }
}