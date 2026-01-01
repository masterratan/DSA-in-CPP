// Arrays are passed in function by reference.
// Vectors are passed by value. Each time you pass, new vector is created.
// You can modify it in function but it will not effect on original vector.
// We can pass a vector by reference using ampercant operator (&)

// Hence C++ provide us both the options of pass by value & pass by reference.

#include<iostream>
#include<vector>
using namespace std;
// Pass By Value:-
// void change(vector<int>a){
//     a[0] = 100;
// }
// Pass By Reference:-
void change(vector<int>&a){
    a[0] = 100;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}