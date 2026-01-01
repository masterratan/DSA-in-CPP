// Ques. Given an array of integers, print a sum triangle using recursion from it such that the first level has all array elements.
// After that, at each level the number of elements is one less than the previous level and elements at the level will be the sum 
// of consecutive two elements in the previous level.

// Sample Input: [5,4,3,2,1]
// Sample Output:
// 5,4,3,2,1
// 9,7,5,3
// 16,12,8
// 28,20
// 48

// #include<bits/stdc++.h>
// using namespace std;
// void GenerateTriangle(vector<int> v, vector<int> temp){
//     if(v.size() == 1) return;

//     for(int i=0; i<=v.size()-2; i++){
//         int k = v[i] + v[i+1];
//         temp.push_back(k);
//     }
    
//     for(int i=0; i<temp.size(); i++) cout<<temp[i]<<" ";
//     cout<<endl;

//     GenerateTriangle(temp, {});
// }
// int main(){
//     // v = {5,4,3,2,1}
//     vector<int> v;

//     v.push_back(5);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);

//     for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
//     cout<<endl;

//     GenerateTriangle(v, {});
// }


// Follow Up
// Sample Input: [5,4,3,2,1]
// Sample Output:
// 48
// 28,20
// 16,12,8
// 9,7,5,3
// 5,4,3,2,1

#include<bits/stdc++.h>
using namespace std;
void GenerateTriangle(vector<int> v, vector<int> temp){
    if(v.size() == 1) return;

    for(int i=0; i<=v.size()-2; i++){
        int k = v[i] + v[i+1];
        temp.push_back(k);
    }

    GenerateTriangle(temp, {});

    for(int i=0; i<temp.size(); i++) cout<<temp[i]<<" ";
    cout<<endl;
}
int main(){
    // v = {5,4,3,2,1}
    vector<int> v;

    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    GenerateTriangle(v, {});

    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
}


