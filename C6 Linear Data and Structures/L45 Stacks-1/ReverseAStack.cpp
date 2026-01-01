// Reverse a stack in the same stack (with the help of two other stacks)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
            return -1;
        }
        if(idx==0) return head->val;
        if(idx==size-1) return tail->val;
        Node* temp = head;
        for(int i=1; i<=idx; i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }
};
void display(stack<int>& st){
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
void reverseUsingStack(stack<int>& st){
    stack<int> temp1,temp2;

    // filling st -> temp1;
    while(st.size()){
        temp1.push(st.top());
        st.pop();
    }
    // filling temp1 -> temp2;
    while(temp1.size()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    // filling temp2 -> st;
    while(temp2.size()){
        st.push(temp2.top());
        temp2.pop();
    }
}
void reverseUsingArray(stack<int>& st){
    vector<int> arr;
    while(st.size()){
        arr.push_back(st.top());
        st.pop();
    }
    while(arr.size()){
        st.push(arr[0]);
        arr.erase(arr.begin()); // remove the first element
    }
}
void reverseUsingLL(stack<int>& st){
    LinkedList ll;
    while(st.size()){
        ll.insertAtTail(st.top());
        st.pop();
    }
    while(ll.size){
        st.push(ll.getAtIdx(0));
        ll.deleteAtHead();
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"Original Stack:-"<<endl;
    display(st);
    cout<<endl;
    
    // reverseUsingStack(st);
    // reverseUsingArray(st);
    reverseUsingLL(st);

    cout<<"Reversed Stack:-"<<endl;
    display(st);
    cout<<endl;
}