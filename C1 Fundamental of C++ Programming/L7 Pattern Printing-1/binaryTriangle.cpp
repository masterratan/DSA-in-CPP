// 1
// 0 1
// 1 0 1
// 0 1 0 1


// #include<iostream>
// using namespace std;
// int main(){
//     int l;
//     cout<<"Enter length: ";
//     cin>>l;
//     int a=5; // kisi se bhi initialise krdo
//     for(int i=1;i<=l;i++){
//         if(i%2!=0) a=1; // odd rows mein 1 se start hoga
//         else a=0; // even rows mein 0 se start hoga
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             // flipping
//             if(a==0) a=1; // 0 aur 1 alternatively aayenge
//             else a=0;
//         }
//         cout<<endl;
//     }
// }

// METHOD-2

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            if((i%2==0 and j%2==0) or (i%2!=0 and j%2!=0)) // or, if((i+j)%2==0)
            cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}