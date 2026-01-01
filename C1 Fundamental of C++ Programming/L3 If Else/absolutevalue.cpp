// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n>=0){
//         cout<<"Absolute Value: "<<n;
//     }
//     else{
//         cout<<"Absolute Value: "<<-n;
//     }
// }

// METHOD-2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<"Absolute Value: "<<n;
}