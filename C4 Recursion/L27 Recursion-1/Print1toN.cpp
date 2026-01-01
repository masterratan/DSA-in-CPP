// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(1,n);
// }


// With Single Parameter

#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}