#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;

    // Taking Input (Method-1)
    pair<string,int> p1;
    p1.first = "Raghav";
    p1.second = 76;
    m.insert(p1);

    // Taking Input (Method-2)
    m["Harsh"] = 15;
    m["Lokesh"] = 67;

    // Printing
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    // Deleting
    m.erase("Raghav");
    m.erase("Sanket");
    
    // Printing
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
}