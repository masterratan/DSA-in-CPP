/*WAP for finding the volume of cylinder by taing radius and height as input*/

#include<iostream>
using namespace std;
int main(){
    int r,h;
    float PI = 3.1415;
    cout<<"Enter Radius: ";
    cin>>r;
    cout<<"Enter Height: ";
    cin>>h;
    float v = PI*r*r*h;
    cout<<"Volume: "<<v;
}