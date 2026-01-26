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
    if(root == NULL) {
        root = new Node(val);
        return root;
    }
    if(val > root->data){
        root->right = insert(root->right , val);
    }else{
        root->left = insert(root->left , val);
    }
    return root;
}

Node* buildBST(int arr[] , int n){
    Node* root = NULL;
    for(int i=0; i<n; i++){
        root = insert(root , arr[i]);
    }
    return root;
}

Node* search(Node* root, int key){
    if(root == NULL || root->data == key) return root;
    if(key < root->data) return search(root->left, key);
    return search(root->right, key);
}

Node* LCA(Node* root , Node* p , Node* q){
    if(root == NULL) return NULL;

    if(root->data > p->data && root->data > q->data){
        return LCA(root->left , p , q);
    }
    else if(root->data < p->data && root->data < q->data){
        return LCA(root->right , p ,q);
    }else{
        return root;
    }
}

int main(){
    int arr[] = {6,2,8,0,4,7,9,3,5};
    int n = 9;

    Node* root = buildBST(arr , n);

    Node* p = search(root, 2);
    Node* q = search(root, 8);

    Node* ans = LCA(root , p , q);

    cout<<ans->data;
}