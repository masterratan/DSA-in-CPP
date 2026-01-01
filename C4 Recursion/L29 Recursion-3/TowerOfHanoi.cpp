#include<iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1,a,c,b); // source, helper, destination
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c); // source, helper, destination
}
int main(){
    int n = 3;
    hanoi(n,'A','B','C');
}

// Important Keypoints:-
// 1. At every step the larger disk is being moved from source to destination via helper rod.
// 2. Step-1: n-1 disks from a -> b
// 3. Step-2: Biggest disk from a -> c
// 4. Step-3: n-1 disks from b -> c