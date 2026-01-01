// Print Elements of nth level

#include<iostream>
#include<climits>
#include<queue>
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
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
void nthLevel(Node* root, int level, int n){
    // n -> required level
    // level -> current level
    if(root==NULL) return;
    if(level==n){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,level+1,n);
    nthLevel(root->right,level+1,n);
}
void nthLevelRev(Node* root, int level, int n){
    if(root==NULL) return;
    if(level==n){
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right,level+1,n);
    nthLevelRev(root->left,level+1,n);
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void levelOrderTraveral(Node* root){
    int n = levels(root);
    for(int i=1; i<=n; i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
    cout<<endl;
}
void levelOrderQueue(Node* root){ // BFS - Breadth First Seach
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
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

    int n = 4; // required level

    // displayTree(a);
    // cout<<endl;
    // nthLevel(a,1,n);
    // cout<<endl<<endl;

    levelOrderQueue(a);
}