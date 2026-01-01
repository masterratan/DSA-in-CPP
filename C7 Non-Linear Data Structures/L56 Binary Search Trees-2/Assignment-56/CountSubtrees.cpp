// Given a BST, count subtrees in it whose nodes lie within a given range.

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
bool countSubTrees(Node *root, int low, int high, int &count){
    if(!root) return true;

    bool leftCall = countSubTrees(root->left, low, high, count);
    bool rightCall = countSubTrees(root->right, low, high, count);

    if(leftCall and rightCall and (root->val >= low and root->val <= high)){
        count++;
        return true;
    }
    return false;
}
int main(){
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(25);
    root->left->right = new Node(35);
    root->right->left = new Node(45);
    root->right->right = new Node(60);

    int count = 0;
    countSubTrees(root, 25, 35, count);
    cout<<count<<endl;

    return 0;
}