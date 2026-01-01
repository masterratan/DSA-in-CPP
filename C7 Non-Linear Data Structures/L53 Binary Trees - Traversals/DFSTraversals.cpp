#include<iostream>
#include<climits>
using namespace std;
class Node{ // This is a TreeNode
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node* root){ // Root -> Left -> Right

    if(root==NULL) return; // base case

    cout<<root->val<<" "; // kaam
    preorder(root->left); // left call
    preorder(root->right); // right call
}
void inorder(Node* root){ // Left -> Root -> Right

    if(root==NULL) return; // base case
    
    inorder(root->left); // left call
    cout<<root->val<<" "; // kaam
    inorder(root->right); // right call
}
void postorder(Node* root){ // Left -> Right -> Root

    if(root==NULL) return; // base case
    
    postorder(root->left); // left call
    postorder(root->right); // right call
    cout<<root->val<<" "; // kaam
}
int main(){
    Node* a = new Node(1); // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"Preorder:- ";
    preorder(a);
    cout<<endl;
    
    cout<<"Inorder:- ";
    inorder(a);
    cout<<endl;

    cout<<"Postorder:- ";
    postorder(a);
    cout<<endl;
}