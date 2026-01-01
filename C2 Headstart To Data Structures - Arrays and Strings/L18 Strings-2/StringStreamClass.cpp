// Ques. Given a sentence, split every single word of the sentence and print in a new line.
// #include<sstream> is used for string stream

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "raghav is    a maths teacher";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}