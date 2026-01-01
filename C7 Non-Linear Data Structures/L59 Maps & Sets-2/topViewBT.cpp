#include<iostream>
#include<climits>
#include<unordered_map>
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
Node* construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}
// int levels(Node* root){
//     if(root==NULL) return 0;
//     return 1 + max(levels(root->left),levels(root->right));
// }
// void nthLevel(Node* root, int level, int n){
//     if(root==NULL) return;
//     if(level==n){
//         cout<<root->val<<" ";
//         return;
//     }
//     nthLevel(root->left,level+1,n);
//     nthLevel(root->right,level+1,n);
// }
// void levelOrder(Node* root){
//     int n = levels(root);
//     for(int i=1; i<=n; i++){
//         nthLevel(root,1,i);
//         cout<<endl;
//     }
//     cout<<endl;
// }
void topview(Node* root){
    unordered_map<int,int> m; // <level,root->val>
    queue< pair<Node*,int> > q; // <Node,level>
    pair<Node*,int> r;
    r.first = root;
    r.second = 0;
    q.push(r);
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(m.find(level) == m.end()){
            m[level] = temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x : m){
        int level = x.first;
        minLevel = min(minLevel,level);
        maxLevel = max(maxLevel,level);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);

    // levelOrder(root);
    topview(root);
}