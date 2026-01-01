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
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = temp;
        else{
            Node* t = head;
            while(t->next!=NULL){
                t = t->next;
            }
            t->next = temp;
        }
        size++;
    }
    void traverse(Node* head){
        while(head && head->next){ // means both head & head->next must not equal to NULL
            cout<<head->val<<" ";
            head = head->next->next;
        }
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.traverse(ll.head);
}