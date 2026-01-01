#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i=1; i<=q.size(); i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
// Reverse queue using a stack
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    // push
    // pop
    // front -> top
    // size, empty
    // back

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // 50 40 30 20 10

    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
    // q.pop();
    // 50 40 30 20
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
    // cout<<q.back()<<endl;

    display(q);
    reverse(q);
    display(q);
}