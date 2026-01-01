// Reverse first K elements of a queue

// Sample Input:-
// q => 10 20 30 40 50
// k => 3

// Output:-
// 30 20 10 40 50

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1; i<=n; i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void reverseK(queue<int>& q, int k){
    stack<int> st;
    for(int i=1; i<=k; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    for(int i=1; i<=q.size()-k; i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    int k = 2;
    // cout<<q.size()<<endl;
    display(q);

    reverseK(q,k);
    display(q);
}