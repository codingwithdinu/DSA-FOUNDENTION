#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Build tree using preorder traversal (-1 means NULL)
Node* BuildTree(vector<int>& preorder, int& idx) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1)
        return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = BuildTree(preorder, idx);
    root->right = BuildTree(preorder, idx);
    return root;
}

// Height of tree
int height(Node* root) {
    if (root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;
}

// Diameter of Binary Tree (in terms of EDGES)
int diameter(Node* root) {
    if (root == NULL) return 0;

    int leftD = diameter(root->left);
    int rightD = diameter(root->right);

    int currD = height(root->left) + height(root->right);

    return max(currD, max(leftD, rightD));
}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = -1;

    Node* root = BuildTree(preorder, idx);
    cout << diameter(root);

    return 0;
}
