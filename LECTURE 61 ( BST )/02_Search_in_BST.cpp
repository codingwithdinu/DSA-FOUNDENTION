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

Node* builBST(int arr[] , int m){
    Node* root = NULL;
    for(int i=0; i<m; i++){
        root = insert(root , arr[i]);
    }
    return root;
}

bool Search(Node* root , int key){
    if(root == NULL) return false;

    if(root->data == key) return true;

    if(root->data > key) return Search(root->left , key);

    if(root->data < key) return Search(root->right , key);
}

int main(){
    int arr[] = {5,3,1,8,9,7,6,2,4};
    int n = 9;
    Node* root = builBST(arr , n);
    cout<<Search(root , 0);
}