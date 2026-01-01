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
    LinkedList(){
        head = NULL;
    }
    void addFirst(int val){
        Node* temp = new Node(val);
        if(head==NULL) head = temp;
        else{
            temp->next = head;
            head = temp;
        }
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void addCycle(int idx){
        Node* temp = head;
        idx--;
        while(idx--){
            temp = temp->next;
        }
        temp->next->next = head->next;
    }
    int findLength(){ // function to find length of cycle
        Node *fast = head, *slow = head;
        // check if cycle exists
        bool flag = false;
        while(fast && fast->next){
            if(fast==slow){
                flag = true;
                break;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        if(!flag) return 0;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = slow->next;
        fast = fast->next->next;
        int count = 1;
        while(slow!=fast){
            count++;
            slow = slow->next;
            fast = fast->next->next;
        }
        return count;
    }
};
int main(){
    LinkedList ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    ll.addFirst(5);
    ll.addFirst(6);
    ll.display();

    ll.addCycle(4);
    cout<<ll.findLength()<<endl;
}