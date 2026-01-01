// WAP to print the matrix in wave form:-

// 1 2 3
// 4 5 6    ->  1 4 7 8 5 2 3 6 9
// 7 8 9

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){
//         if(j%2 == 0){ // odd rows
//             for(int i=0;i<3;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{ // even rows
//             for(int i=2;i>=0;i--){
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
    for(int j=0;j<n;j++){
        if(j%2 == 0){ // odd rows
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ // even rows
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    } 
}