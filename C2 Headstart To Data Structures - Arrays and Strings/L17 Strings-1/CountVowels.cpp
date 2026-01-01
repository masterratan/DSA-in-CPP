// Ques. Input a string of length n and count all the vowels in the given string.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u') count++;
        i++;
    }
    cout<<"Vowels = "<<count;
}