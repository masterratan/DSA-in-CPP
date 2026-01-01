// Inorder Predecessor

Node* predecessor(Node* root){
    if(root->left == NULL) return NULL;
    Node* pred = root->left;
    while(pred->right != NULL){
        pred = pred->right;
    }
    return pred;
}

// Inorder Successor

Node* successor(Node* root){
    if(root->right == NULL) return NULL;
    Node* succ = root->right;
    while(pred->left != NULL){
        succ = succ->left;
    }
    return succ;
}