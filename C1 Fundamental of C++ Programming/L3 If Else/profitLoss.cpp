#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss: "<<cp-sp;
    }
    else if(cp<sp){
        cout<<"Profit: "<<sp-cp;
    }
    else{
        cout<<"No Profit, No Loss";
    }
}