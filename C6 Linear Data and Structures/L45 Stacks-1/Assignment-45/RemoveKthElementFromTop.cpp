// Ques. Remove Kth element from top in a given stack. (Hint: Use another stack, just like insertion question)

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();  
    }
    cout<<endl;
}
void Remove(stack<int>& st, int k){
    stack<int> temp;
    k--;
    while(k--){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10); // bottom
    st.push(20);
    st.push(30);
    st.push(40); // to remove
    st.push(50);
    st.push(60);
    st.push(70); // top

    int k = 4;

    display(st);
    Remove(st,k);
    display(st);
}