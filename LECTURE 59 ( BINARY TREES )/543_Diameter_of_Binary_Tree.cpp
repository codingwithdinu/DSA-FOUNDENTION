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

Node* BuildTree(vector<int> &preorder , int &idx){
    idx++;
    if(preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = BuildTree(preorder,idx);
    root->right = BuildTree(preorder,idx);
    return root;
}

int height(Node* root){
    if(root==NULL) return 0;
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt , rightHt) + 1;
}

int DOBT(Node* root){
    if(root == NULL) return 0;
    int leftD = DOBT(root->left);
    int rightD = DOBT(root->right);
// <<<<<<< DSA-SERIES
    int currD = height(root->left) + height(root->right);
// =======
    int currD = height(root->left) + height(root->right)+1;
// >>>>>>> main
    return max(currD , max(leftD , rightD));
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1}; 
    int idx = -1;
    Node* root = BuildTree(preorder , idx);
    cout<<DOBT(root);
}