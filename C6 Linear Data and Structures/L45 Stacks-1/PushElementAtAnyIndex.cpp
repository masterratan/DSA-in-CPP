#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();  
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIndex(stack<int>& st, int idx, int val){
    int n = st.size();
    int k = n-idx;
    stack<int> temp;
    while(k--){ // same as while(st.size() > idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    display(st);
    pushAtBottom(st,70);
    display(st);
    pushAtIndex(st,2,90);
    display(st);
}