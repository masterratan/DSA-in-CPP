// Ques. WAP to calculate the sum of odd numbers b/w a & b (both inclusive) using recursion.

#include<iostream>
using namespace std;
int sumodd(int sum, int a, int b){
    // base case
    if(a > b) return sum;
    sumodd(sum+a, a+2, b);
}
int main(){
    int a = 3;
    int b = 7;

    if(a>b) swap(a,b); // if not given a<b

    if(a%2 == 0) a++;
    if(b%2 == 0) b--;

    cout<<sumodd(0, a, b);
}