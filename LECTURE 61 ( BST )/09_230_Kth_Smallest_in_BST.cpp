#include <iostream>
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
    if(root == NULL ){
        root = new Node(val);
        return root;
    }

    if(val > root->data){
        root->right = insert(root->right , val);
    }
    else{
        root->left = insert(root->left ,val);
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
 

int prevorder = 0;
int KthSmallest(Node* root , int k){

    if(root == NULL) return -1;

    if(root->left != NULL){
        int leftAns = KthSmallest(root->left , k);
        if(leftAns != -1) return leftAns;
    }
    if(prevorder + 1 == k){
        return root->data;
    }
    prevorder = prevorder+1;

    if(root->right != NULL){
        int rightAns = KthSmallest(root->right , k);
        if(rightAns != -1) return rightAns;
    }

    return -1;
}

int main(){
    int arr[] = {5,3,6,2,4,1};
    int n = 6;
    Node* root = BuildBST(arr, n);
    cout<<KthSmallest(root , 4);
}