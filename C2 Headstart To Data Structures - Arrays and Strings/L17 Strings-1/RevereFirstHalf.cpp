// Ques. Input a string of even length and reverse the first half of the string 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin,str);

    int n = str.size();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
}