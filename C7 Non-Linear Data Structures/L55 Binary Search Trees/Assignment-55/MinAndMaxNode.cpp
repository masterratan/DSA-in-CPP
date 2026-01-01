// Ques. Find the nodes with minimum and maximum value in a Binary Search Tree
// Worst Case TC => O(n) {in case of a degenrate tree}

#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node(int key){
        val = key;
        left = right = NULL;
    }
};
int minimum(Node *root){
    if(!root) return -1;
    if(!root->left && !root->right) return root->val;
    minimum(root->left);
}
int maximum(Node *root){
    if(!root) return -1;
    if(!root->left && !root->right) return root->val;
    maximum(root->right);
}
int main(){
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);

    root->left->left = new Node(25);
    root->left->right = new Node(35);
    root->right->left = new Node(45);
    root->right->right = new Node(60);

    cout<<minimum(root)<<endl;
    cout<<maximum(root)<<endl;
    return 0;
}