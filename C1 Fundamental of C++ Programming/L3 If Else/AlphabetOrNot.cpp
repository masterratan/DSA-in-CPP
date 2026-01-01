// #include<iostream>
// using namespace std;
// int main(){
//     char n;
//     cout<<"Enter a character: ";
//     cin>>n;
//     int x = (int)n; // ASCII Value of n is now stored in x
//     if(x>=65 && x<=90){
//         cout<<"UPPER CASE Alphabet";
//     }
//     else if(x>=97 && x<=122){
//         cout<<"lower case Alphabet";
//     }
//     else{
//         cout<<"The character is not an Alphabet";
//     }
// }

// METHOD-2

#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter a character: ";
    cin>>n;
    int x = (int)n; // ASCII Value of n is now stored in x
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<"THe character is an Alphabet";
    }
    else{
        cout<<"The character is not an Alphabet";
    }
}