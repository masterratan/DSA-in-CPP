#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    
    sort(s.begin(),s.end());
    cout<<s;
}