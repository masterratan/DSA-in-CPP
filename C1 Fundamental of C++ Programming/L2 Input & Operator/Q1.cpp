/*Take integer as input and print half of the number*/

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    float y = (float)x;
    cout<<"Half of the given number is: "<<y/2;
}

/*Take float input and print the fractional part of the real number.*/

#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a number: ";
    cin>>x;
    int y = (int)x;
    cout<<"Fractional Part is: "<<y;
}
