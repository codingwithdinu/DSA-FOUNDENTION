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

    if(val > root->data){
        root->right = insert(root->right , val);
    }
    else{
        root->left = insert(root->left , val);
    }

    return root;
}

Node* BuildBST(int arr[] , int n){
    Node* root = NULL;
    for(int i=0; i<n; i++){
        root = insert(root , arr[i]);
    }
    return root;
}


validHelper(Node* root , Node* min , Node* max){
    if(root == NULL ) return true;

    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    return validHelper(root->left , min , root) && validHelper(root->right , root , max);
}

bool validateBST(Node* root){
    return validHelper(root , NULL , NULL);
}

int main(){
    int arr[] = {5,3,6,1,4,7};
    int n = 6;
    Node* root = BuildBST(arr , n);
    root->data = 15;
    cout<<validateBST(root);
}