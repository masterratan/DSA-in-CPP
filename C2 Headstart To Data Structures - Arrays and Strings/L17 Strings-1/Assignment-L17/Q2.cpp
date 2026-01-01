// Input a string of length n and count all the consonants in the given string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter an alphabet string: "<<endl;
    getline(cin,str);

    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u') continue;
        else if(str[i]=='A' or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U') continue;
        else count++;
    }

    cout<<count;

}