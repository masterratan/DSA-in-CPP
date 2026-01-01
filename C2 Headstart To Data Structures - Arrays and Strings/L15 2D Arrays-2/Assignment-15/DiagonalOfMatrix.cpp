// WAP to print the elements of both the diagonals in a square matrix.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9
//     cout<<"Diagonal-1: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j) cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"Diagonal-2: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i+j==3-1) cout<<arr[i][j]<<" ";
//         }
//     }
// }

// USER INPUT

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter dimension: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Diagonal-1: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j) cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Diagonal-2: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j==n-1) cout<<arr[i][j]<<" ";
        }
    }
}