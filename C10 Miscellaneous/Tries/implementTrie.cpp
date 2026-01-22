#include <bits/stdc++.h>
using namespace std;
class Trie {
public:
    struct Node {
        Node *children[26];
        bool eow; // end of word

        Node(){
            for(int i=0; i<26; i++) children[i] = nullptr;
            eow = false;
        }
    };
    
    Node *root;

    Trie() {
        root = new Node();
    }

    void insert(const string &word){
        Node *curr = root;
        for(char ch : word){
            int idx = ch - 'a';
            if(curr->children[idx] == nullptr) curr->children[idx] = new Node();
            curr = curr->children[idx];
        }
        curr->eow = true;
    }

    bool search(const string &word){
        Node *curr = root;
        for(char ch : word){
            int idx = ch - 'a';
            if(curr->children[idx] == nullptr) return false;
            curr = curr->children[idx];
        }
        return curr->eow;
    }

};
int main(){
    vector<string> words = {"the", "a", "there", "their", "any"};

    Trie trie;
    for(auto word : words) trie.insert(word);

    cout<<trie.search("the")<<"\n";
    cout<<trie.search("there")<<"\n";
    cout<<trie.search("answer")<<"\n";

    return 0;
}