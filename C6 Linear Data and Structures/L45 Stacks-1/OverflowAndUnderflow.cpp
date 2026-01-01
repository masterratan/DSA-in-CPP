// Overflow occurs when we try to push an element in a stack, which is already in its maximum quantity
// Underflow occurs when we try to use these function:- st.pop() or st.top() in an empty stack
// Error for underflow:- Segmentation Fault

#include<iostream>
#include<stack>
using namespace std;
int main(){
    // underflow
    stack<int> st;
    st.top();
    st.pop();
}