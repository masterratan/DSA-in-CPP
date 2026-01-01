// HW Question:-
// Delete middle node of a linked list.
// For even length linked list delete the second middle element.

#include<iostream>
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
class LinkedList{
public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = temp;
        else {
            Node* t = head;
            while(t->next!=NULL) t = t->next;
            t->next = temp;
        }
        size++;
    }
    void deleteMiddleNode(){
        Node* slow = head;
        Node* fast = head;
        // Method-1
        // int n = 0;
        // while(fast!=NULL && fast->next!=NULL){
        //     n++;
        //     if(n>1) slow = slow->next;
        //     fast = fast->next->next;
        // }
        // Method-2: Can also be used while finding left middle
        while(fast!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.display();
    ll.deleteMiddleNode();
    ll.display();
}