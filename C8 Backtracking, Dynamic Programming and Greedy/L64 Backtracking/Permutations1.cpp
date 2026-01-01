// Ques. You are given a string consisting of small alphabets. Consider no repetition in the characters.
// Print all possible permutation of the given string.

#include<bits/stdc++.h>
using namespace std;
void permutations(string input, string output){

    if(input=="") cout<<output<<endl;

    for(int i=0; i<input.size(); i++){
        char ch = input[i];

        string left = input.substr(0,i);
        string right = input.substr(i+1);
        string ros = left + right; // rest of the string

        permutations(ros,output + ch);
    }
}
int main(){
    string s = "abc";
    permutations(s,"");
}