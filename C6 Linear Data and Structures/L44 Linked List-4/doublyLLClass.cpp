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
class DLL{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    // constructor
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next->prev = t;
            temp->next = t;
            t->prev = temp;
            size++;
        }
        return;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL; // extra
        if(!head) tail = NULL; // extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        else if(size==1){
            deleteAtHead();
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>size) cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // extra
            size--;
        }
        return;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"ERROR:- INVALID VALUE OF INDEX !!"<<endl;
            return -1;
        }
        if(idx==0) return head->val;
        if(idx==size-1) return tail->val;
        Node* temp;
        if(idx<=size/2){
            // traversing from head
            temp = head;
            for(int i=1; i<=idx; i++){
                temp = temp->next;
            }
        }
        else{
            // traversing from tail
            temp = tail;
            for(int i=1; i<size-idx; i++){
                temp = temp->prev;
            }
        }
        return temp->val;
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
    // 10 20 30 40 50
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.insertAtIdx(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.insertAtTail(90);
    list.display();
    list.deleteAtIdx(3);
    list.display();
    cout<<list.getAtIdx(3);
}