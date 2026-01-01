// Ques. Input a string and return the number of times the neighbouring characters are 
//       different from each other

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(n==1) break;
        if(n==2 and str[0] != str[1]){
            count = 1;
            break;
        }
        if(i==0){
            if(str[i] != str[i+1]) count++;
        }
        else if(i==n-1){
            if(str[i] != str[i-1]) count++;
        }
        else if(str[i] != str[i+1] and str[i] != str[i-1]) count++; // str[i] is a unique element
    }
    cout<<count; 
}