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
    }
    else{
        root->right = insert(root->right ,val);
    }
    return root;
}

Node* buildBST(int arr[] , int n){
    Node* root = NULL;
    for(int i=0 ; i<n; i++){
        root = insert(root , arr[i]);
    }
    return root;
}

void Inorder(Node* root){
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

// delete a node in BST
// case 1 : node with 0 child
// case 2 : node with 1 child
// case 3 : node with 2 child

// inorder successor :- in BST it is left most node in right subtree of a node

Node* getinorderSuccessor(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root , int val){

    if(root == NULL) return NULL;

    if(val < root->data){
        root->left = delNode(root->left , val);
    }
    else if(val > root->data){
        root->right = delNode(root->right , val);
    }
    else{
        // case 1 : 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // case 2 :  1 child
        if(root->left == NULL || root->right == NULL){
            Node* child = root->left == NULL ? root->right : root->left;
            delete root;
            return child;
        }
        
        // case 3 : 2 child
        Node* IS = getinorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right , IS->data);
        return root;
    }
    return root;
}

int main(){
    int n = 9;
    int arr[] = {8,5,10,3,6,11,1,4,14};
    Node* root = buildBST(arr , n);
    Inorder(root);
    cout<<endl;

    root = delNode(root , 10);
    Inorder(root);


}