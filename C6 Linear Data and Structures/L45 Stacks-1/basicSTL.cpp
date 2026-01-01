// STL -> Standard Template Library

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    // printing in reverse order -> emptying the stack
    // while(st.size()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    // method-2: without disturbing the original stack
    // stack<int> temp;
    // while(st.size()){
    //     cout<<st.top()<<endl;
    //     int x = st.top();
    //     st.pop();
    //     temp.push(x);
    // }
    // while(temp.size()){
    //     int x = temp.top();
    //     temp.pop();
    //     st.push(x);
    // }

    // printing in correct order without disturbing the original stack
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();  
    }
}