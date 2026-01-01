// Ques. Given an integer 'numRows', generate Pascal's Triangle.
// LeetCode #118

// #include<iostream>
// #include<vector>
// using namespace std;
// void generate(int n) {
//     vector<vector<int>> v;
//     // creating vector of size 1 for 1st row, size 2 for 2nd row, 3 for 3rd row, etc. and then pushing them in 2D Vector 'v'
//     for(int i=1;i<=n;i++){
//         vector<int> a(i);
//         v.push_back(a);
//     }
//     // generating pascal triangle
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0 or j==i) v[i][j] = 1;
//             else v[i][j] = v[i-1][j] + v[i-1][j-1];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // input
//     int n;
//     cout<<"Enter Rows: ";
//     cin>>n;
//     generate(n);
// }

// OPTIMISATION:-

#include<iostream>
#include<vector>
using namespace std;
void generate(int n) {
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==0 or j==i) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // input
    int n;
    cout<<"Enter Rows: ";
    cin>>n;
    generate(n);
}