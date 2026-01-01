/*Write a program to input month number and print total number of days in month 
using switch case*/

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Month Number(1-12): ";
    cin>>x;
    switch (x){
        case 1: // January
            cout<<31;
            break;
        case 2: // February
            cout<<28;
            break;
        case 3: // March
            cout<<31;
            break;
        case 4: // April
            cout<<30;
            break;
        case 5: // May
            cout<<31;
            break;
        case 6: // June
            cout<<30;
            break;
        case 7: // July
            cout<<31;
            break;
        case 8: // August
            cout<<31;
            break;
        case 9: // September
            cout<<30;
            break;
        case 10: // October
            cout<<31;
            break;
        case 11: // November
            cout<<30;
            break;
        case 12: // December
            cout<<31;
            break;
        default: 
            cout<<"Invalid Month Number";
        
    }
}