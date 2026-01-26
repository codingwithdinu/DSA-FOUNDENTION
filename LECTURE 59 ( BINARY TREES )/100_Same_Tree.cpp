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

static int idx = -1;
Node* BuildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);
    return root;
}

bool isSameTree(Node* p , Node* q){
    if(p==NULL || q==NULL) return p==q;
    bool isleftSame = isSameTree(p->left , q->left);
    bool isrightSame = isSameTree(p->right , q->right);
    return isleftSame && isrightSame && p->data == q->data;
}

int main(){
    vector<int> p = {1,2,-1,-1,3,-1,-1};
    vector<int> q = {1,2,-1,-1,3,-1,-1};
    idx = -1;
    Node* rootP = BuildTree(p);
    idx = -1;
    Node* rootQ = BuildTree(q);
    cout << (isSameTree(rootP, rootQ) ? "Trees are the same" : "Trees are different") << endl;
    return 0;
}