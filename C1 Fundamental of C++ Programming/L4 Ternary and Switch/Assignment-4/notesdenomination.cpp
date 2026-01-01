/*Write a program to count the minimu number of notes in a given amount using switch 
statement*/

// Allowed Domination Rs.1, Rs.2, Rs.5, Rs.10, Rs.20, Rs.50, Rs.100, Rs.200, Rs.500

// METHOD-1 USING IF ELSE
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Amount: ";
    cin>>n;
    int count = 0;
    if(n>=500){
        count += n/500;
        n %= 500;
    }
    if(n>=200){
        count += n/200;
        n %= 200;
    }
    if(n>=100){
        count += n/100;
        n %= 100;
    }
    if(n>=50){
        count += n/50;
        n %= 50;
    }
    if(n>=20){
        count += n/20;
        n %= 20;
    }
    if(n>=10){
        count += n/10;
        n %= 10;
    }
    if(n>=5){
        count += n/5;
        n %= 5;
    }
    if(n>=2){
        count += n/2;
        n %= 2;
    }
    if(n>=1){
        count += n/1;
    }
    cout<<"Minimum Notes Required: "<<count;
}

// METHOD-2 USING SWITCH
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Amount: ";
    cin>>n;
    int count = 0;
    switch(n>=500){
        case 1:
        count += n/500;
        n %= 500;
        break;
    }
    switch(n>=200){
        case 1:
        count += n/200;
        n %= 200;
        break;
    }
    switch(n>=100){
        case 1:
        count += n/100;
        n %= 100;
        break;
    }
    switch(n>=50){
        case 1:
        count += n/50;
        n %= 50;
        break;
    }
    switch(n>=20){
        case 1:
        count += n/20;
        n %= 20;
        break;
    }
    switch(n>=10){
        case 1:
        count += n/10;
        n %= 10;
        break;
    }
    switch(n>=5){
        case 1:
        count += n/5;
        n %= 5;
        break;
    }
    switch(n>=2){
        case 1:
        count += n/2;
        n %= 2;
        break;
    }
    switch(n>=1){
        case 1:
        count += n/1;
        break;
    }
    cout<<"Minimum Notes Required: "<<count;
}