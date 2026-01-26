#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
    }
};

int search(vector<int> &inorder, int left, int right, int val){
    for (int i = left; i <= right; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

TreeNode *helper(vector<int> &inorder, vector<int> &postorder, int &posidx, int left, int right){
    if (right < left)
        return NULL;

    TreeNode *root = new TreeNode(postorder[posidx]);

    int inidx = search(inorder, left, right, postorder[posidx]);
    posidx--;

    root->right = helper(postorder, inorder, posidx, inidx + 1, right);
    root->left = helper(postorder, inorder, posidx, left, inidx - 1);

    return root;
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder){
    int posidx = postorder.size() - 1;
    return helper(postorder, inorder, posidx, 0, inorder.size() - 1);
}

int main(){
    vector<int> inorder = {9,3,15,20,7};
    vector<int> preorder = {3,9,20,15,7};

    buildTree(inorder,preorder);
}
