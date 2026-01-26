#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* root , int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val < root->data){
        root->left = insert(root->left , val);
    }else{
        root->right = insert(root->right , val);
    }

    return root;
}

Node* BuildBST(vector<int> &arr){
    Node* root = NULL;
    for(int i=0; i<arr.size(); i++){
        root = insert(root , arr[i]);
    }

    return root;
}

Node* Inorder(Node* root){
    if(root == NULL) return NULL;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
int main(){
    vector<int> arr = {8,2,3,1,6,7,9,4,5};
    Node* root = BuildBST(arr);
    Inorder(root);
}