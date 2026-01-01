// Given a BST and two keys in it. Find the distance between two nodes with given two keys.
// It may be assumed that both keys exist in BST.

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node(int key){
        val = key;
        left = right = NULL;
    }
};
int rootToNode(Node* root, int k){
    if(!root) return 0;
    if(root->val == k) return 0;
    if(root->val > k) return 1 + rootToNode(root->left, k);
    return 1 + rootToNode(root->right, k);
}
int distance(Node *root, int k1, int k2){
    if(!root) return 0;

    if(root->val > k1 and root->val > k2) return distance(root->left, k1, k2);
    if(root->val < k1 and root->val < k2) return distance(root->right, k1, k2);
    if(root->val >= k1 and root->val <= k2) return rootToNode(root, k1) + rootToNode(root, k2);
}
int main(){
    Node *root = new Node(40);
    root->left = new Node(25);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->left->right = new Node(30);
    root->right->left = new Node(45);
    root->right->right = new Node(60);

    int k1 = 30, k2 = 50;
    if(k1>k2) swap(k1,k2);

    cout<<distance(root, k1, k2);
    return 0;
}

// Tree ->
//          40
//    25          50
// 20    30    45    60