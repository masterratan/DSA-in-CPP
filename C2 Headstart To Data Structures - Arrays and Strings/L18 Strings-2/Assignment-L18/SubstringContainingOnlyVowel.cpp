// Input a string and return the number of substrings that contains only vowels.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = {"aedbciotuuee"};
    
    int count = 0;
    int ans = 0;

    for(int i=0;i<str.size();i++){
        if(str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u') count++;
        else{
            ans += count*(count+1)/2;
            count = 0;
        }
    }
    ans += count*(count+1)/2;

    cout<<ans;

}