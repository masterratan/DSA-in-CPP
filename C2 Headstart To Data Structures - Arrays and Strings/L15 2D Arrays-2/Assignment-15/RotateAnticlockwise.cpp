// WAP to rotate the square matrix by 90 degree anti-clockwise.
// 1 2 3      3 6 9
// 4 5 6  ->  2 5 8
// 7 8 9      1 4 7

// #include<iostream>
// using namespace std;
// int main(){
//     // Input
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     // Step-1: Transpose
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             // Swap i,j and j,i
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     // Step-2: Reverse each column
//     for(int k=0;k<3;k++){ // traversing through each column
//         int i = 0;
//         int j = 3-1;
//         while(i<=j){
//             int temp = arr[i][k];
//             arr[i][k] = arr[j][k];
//             arr[j][k] = temp;
//             i++;
//             j--;
//         }     
//     }
//     // Output
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// USER INPUT

#include<iostream>
using namespace std;
int main(){
    // Input
    int n,m;
    cout<<"Enter dimension: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Step-1: Transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            // Swap i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Step-2: Reverse each column
    for(int k=0;k<m;k++){ // traversing through each column
        int i = 0;
        int j = m-1;
        while(i<=j){
            int temp = arr[i][k];
            arr[i][k] = arr[j][k];
            arr[j][k] = temp;
            i++;
            j--;
        }     
    }
    cout<<endl;
    // Output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}