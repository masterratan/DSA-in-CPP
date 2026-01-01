#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Month Number(1-12): ";
    cin>>x;
    // 31 Days -> 1 3 5 7 8 10 12
    // 30 Days -> 4 6 9 11
    // 28 Days -> 2
    switch ((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
        case 1:
        cout<<"31 Days";
    }
    switch (x==4 || x==6 || x==9 || x==11){
        case 1:
        cout<<"30 Days";
    }
    switch (x==2){
        case 1:
        cout<<"28 Days";
    }
}