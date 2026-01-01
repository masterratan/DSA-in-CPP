// Movement allowed -> Right, Down

#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er or sc>ec) return 0;
    if(sr==er and sc==ec) return 1;
    int rightWays = maze(sr, sc+1, er, ec);
    int downWays = maze(sr+1, sc, er, ec);
    return rightWays + downWays;
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er or sc>ec) return;
    if(sr==er and sc==ec){ // destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s+'R'); // right
    printPath(sr+1, sc, er, ec, s+'D'); // down
}
int main(){
    int r,c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter columns: ";
    cin>>c;

    cout<<"Total Ways: "<<maze(1,1,r,c)<<endl;
    printPath(1,1,r,c,"");
}

// Method-2 Passing only 2 values in function

#include<iostream>
using namespace std;
int maze(int sr, int sc){
    if(sr<1 or sc<1) return 0;
    if(sr==1 and sc==1) return 1;
    int rightWays = maze(sr, sc-1);
    int downWays = maze(sr-1, sc);
    return rightWays + downWays;
}
void printPath(int sr, int sc, string s){
    if(sr<1 or sc<1) return;
    if(sr==1 and sc==1){ // destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc-1, s+'R'); // right
    printPath(sr-1, sc, s+'D'); // down
}
int main(){
    int r,c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter columns: ";
    cin>>c;

    cout<<"Total Ways: "<<maze(r,c)<<endl;
    printPath(r,c,"");
}