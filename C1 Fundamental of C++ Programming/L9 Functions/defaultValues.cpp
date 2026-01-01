#include<iostream>
using namespace std;
void fun(int x = 7, int y = 8){
    // 7 is now default value of x
    // 8 is now default value of y
    // agr fun mein kuch bhi pass nhi hua toh x aur y mein unke default values chale jayenge
    cout<<x<<" "<<y;
}
int main(){
    fun(4,6);
}