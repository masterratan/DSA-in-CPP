// Implement Linked List Class
// The user defined LL should have insertNode(idx,val), deleteNode(idx), get(idx) and display functions.

#include<iostream>
using namespace std;
class Node{ // user defined data type
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
    void insertNode(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
            return;
        }
        Node* t = new Node(val);
        if(idx==0){
            t->next = head;
            head = t;
            if(size == 0) tail = t;
        }
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            if (t->next == NULL) tail = t;
        }
        size++;
        return;
    }
    // void deleteAtIdx(int idx){
    //     if(idx<0 || idx>size) cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
    //     else if(idx==0) deleteAtHead();
    //     else if(idx==size-1) deleteAtTail();
    //     else{
    //         Node* temp = head;
    //         for(int i=1; i<=idx-1; i++){
    //             temp = temp->next;
    //         }
    //         temp->next = temp->next->next;
    //         size--;
    //     }
    //     return;
    // }
    void deleteNode(int idx){
        if(idx<0 || idx>size){
            cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
            return;
        }
        if(idx == 0){
            head = head->next;
        }
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        size--;
        return;
    }
    int get(int idx){
        if(idx<0 || idx>=size){
            cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i=1; i<=idx; i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertNode(0,10);
    ll.insertNode(1,20);
    ll.insertNode(2,30);
    ll.insertNode(3,40);
    ll.insertNode(4,50);
    ll.display();
    // cout<<ll.get(3)<<endl;
    ll.deleteNode(0);
    ll.display();
    return 0;
}