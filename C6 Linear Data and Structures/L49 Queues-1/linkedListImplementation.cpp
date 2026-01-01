// Note:-
// push   -> insertAtTail
// pop    -> deleteAtHead
// front  -> head->val
// back   -> tail->val
// size   -> LL.size()

#include<iostream>
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
class Queue{
public:
    Node* head;
    Node* tail;
    int s; // size
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    // push function -> insertAtTail
    void push(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    // pop function -> deleteAtHead
    void pop(){
        if(s==0){
            cout<<"Queue is Empty!";
            return;
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp); // memory ki wastage nhi ho rhi
    }
    // front function -> head->val
    int front(){
        if(s==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return head->val;
    }
    // back function -> tail->val
    int back(){
        if(s==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // size -> LL.size()
    int size(){
        return s;
    }
    bool empty(){
        return s==0;
    }
};
int main(){
    Queue q;
    // push, pop, front, back, size, empty
    q.push(10); // front 10 back
    q.push(20); // front 10 20 back
    q.push(30); // front 10 20 30 back
    q.push(40); // front 10 20 30 40 back

    q.display();
    q.push(50); // front 10 20 30 40 50 back
    q.push(60); // front 10 20 30 40 50 60 back
    q.display();
    q.pop(); // front 20 30 40 50 60 back
    q.display();
    cout<<q.front()<<endl; // 20
    cout<<q.back()<<endl; // 60
}

// Advantages of Linked List Implementation of queue over Array Implementation:-
// 1. Unlimited Size
// 2. Natural, It is like LL Implementation
// 3. No Wastage of size

// Advantages of Linked List Implementation of queue over Array Implementation:-
// 1. For each element we have a Node -> val, *next (double size wastage)