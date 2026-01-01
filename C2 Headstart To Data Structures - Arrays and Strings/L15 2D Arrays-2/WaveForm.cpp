// WAP to print the matrix in wave form:-

// 1 2 3
// 4 5 6    ->  1 2 3 6 5 4 7 8 9
// 7 8 9

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         if(i%2 == 0){ // odd rows
//             for(int j=0;j<3;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{ // even rows
//             for(int j=2;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     } 
// }

// USER INPUT

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter dimensions of matrix: ";
    cin>>n>>m;
    cout<<"Enter elements of matrix: "<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];            
        }
    }
    for(int i=0;i<n;i++){
        if(i%2 == 0){ // odd rows
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ // even rows
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    } 
}