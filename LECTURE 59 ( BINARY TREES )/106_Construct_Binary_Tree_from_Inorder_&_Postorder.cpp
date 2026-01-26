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

class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int val) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == val) return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,
                     int& posidx, int left, int right) {

        if (left > right) return NULL;

        TreeNode* root = new TreeNode(postorder[posidx--]);

        int inidx = search(inorder, left, right, root->val);

        root->right = helper(inorder, postorder, posidx, inidx + 1, right);
        root->left  = helper(inorder, postorder, posidx, left, inidx - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int posidx = postorder.size() - 1;
        return helper(inorder, postorder, posidx, 0, inorder.size() - 1);
    }
};
