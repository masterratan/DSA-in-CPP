// Input a string of even length and reverse the second half of the string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);

    int placeValue = 1; // Initially Ones place -> Tens place -> Hundredth Place & so on
    int ans = 0;
    int n = str.size();
    for(int i=n-1;i>=0;i--){        
        ans += (str[i] - '0')*placeValue;
        placeValue *= 10;
    }
    cout<<ans;
}