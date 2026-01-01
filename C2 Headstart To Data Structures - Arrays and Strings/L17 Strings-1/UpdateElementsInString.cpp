// Ques. Input a string of size n and Update all the even position in the string to character 'a'. Consider 0-based indexing.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    for(int i=0 ; str[i] != '\0' ; i++){
        if(i%2==0) str[i] = 'a';
    }
    cout<<str<<endl;
}