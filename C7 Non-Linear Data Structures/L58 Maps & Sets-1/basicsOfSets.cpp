// In C++, (Ordered) Set stores values in sorted order by default. [Not unordered set]

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.erase(2);

    cout<<s.size()<<endl;
    // for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    int target = 4;
    if(s.find(target) != s.end()){ // target exists
        cout<<"Exists"<<endl;
    }
    else cout<<"Does Not Exists"<<endl;

    // Important Note:-
    // s.find() searches in set and if not found returns s.end() (last element) which is iterator next to the last value in set
}