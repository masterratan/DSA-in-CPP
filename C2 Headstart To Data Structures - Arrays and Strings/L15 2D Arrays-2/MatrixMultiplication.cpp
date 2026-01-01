#include<iostream>
using namespace std;
int main(){
    int n,m; // Matrix-1 (n*m)
    cout<<"Enter dimensions of matrix-1: ";
    cin>>n>>m; // rows -> n , column -> m
    cout<<"Enter elements of matrix-1: "<<endl;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];            
        }
    }
    int p,q; // Matrix-2 (p*q)
    cout<<"Enter dimensions of matrix-2: ";
    cin>>p>>q; // rows -> p , column -> q
    cout<<"Enter elements of matrix-2: "<<endl;
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];            
        }
    }
    // for multiplication to be possible, columns of matrix-1 must be equal to rows of matrix-2 (m == p)
    if(m != p) cout<<"Error: Multiplication is not possible !!";
    else{
        // dimension of resultant matrix (n*q)
        int res[n][q];
        // multiplication
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<m;k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // output
        cout<<"Resultant Matrix: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}