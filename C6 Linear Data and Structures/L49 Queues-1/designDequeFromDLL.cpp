// Design a Deque:-
// Implement addFront(), addRear(), getFront(), getRear(), deleteFront(), deleteRear(), s()

// addFront()      -> pushFront()
// addRear()       -> pushBack()
// getFront()      -> front()
// getRear()       -> back()
// deleteFront()   -> popFront()
// deleteRear()    -> popBack()

// We can use both SLL & DLL for creating a Deque
// SLL:-                   DLL:- 
// pushFront : O(1)        pushFront : O(1)
// pushBack  : O(1)        pushBack  : O(1)
// popFront  : O(1)        popFront  : O(1)
// popBack   : O(n)        popBack   : O(1)

// *Hence DLL is slightly better for creating a Deque

#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int s;
    // constructor
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }
    void popFront(){
        if(s==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL; // extra
        if(!head) tail = NULL; // extra
        s--;
    }
    void popBack(){
        if(s==0){
            cout<<"List is Empty!";
            return;
        }
        else if(s==1){
            popFront();
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return head->val;
    }
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
    int size(){
        return s;
    }
    int empty(){
        return s==0;
    }
};
int main(){
    Deque dq;
    dq.pushBack(10); // 10
    dq.pushBack(20); // 10 20
    dq.pushBack(30); // 10 20 30
    dq.pushBack(40); // 10 20 30 40

    dq.display();
    dq.popBack(); // 10 20 30
    dq.display();

    dq.popFront(); // 20 30
    dq.display();

    dq.pushFront(50); // 50 20 30
    dq.display();

    cout<<dq.front()<<endl; // 50
    cout<<dq.back()<<endl; // 30
}