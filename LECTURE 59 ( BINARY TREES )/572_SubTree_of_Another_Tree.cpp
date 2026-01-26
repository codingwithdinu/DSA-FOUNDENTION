#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};


Node* BUildTree(vector<int> &preorder , int &idx ){
    idx++;
    if(preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = BUildTree(preorder,idx);
    root->right = BUildTree(preorder,idx);
    return root;
}

bool isIdentical(Node* p , Node* q){
    if(p==NULL || q==NULL) return p==q;
    return p->data == q->data && isIdentical(p->left , q->left) && isIdentical(p->right , q->right);
}

bool isSubTree(Node* root , Node* subroot){
    if(root == NULL || subroot == NULL) return root == subroot;
    if(root->data == subroot->data && isIdentical(root,subroot)) return true;
    return isSubTree(root->left , subroot) || isSubTree(root->right , subroot);
}

int main(){
    vector<int> p = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> q = {3,4,-1,-1,5,6,-1,-1,-1};
    int idx = -1;
    Node* root = BUildTree(p , idx);
    idx = -1;
    Node* subroot = BUildTree(q ,idx);
    
    cout << (isSubTree(root , subroot) ? "true" : "false") << endl;
    
}