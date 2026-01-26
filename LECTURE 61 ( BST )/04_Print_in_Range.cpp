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
    }else{
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

void Inorder(Node* root){
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void printinRange(Node* root , int start , int end){
    if(root == NULL) return;

    if(start <= root->data && root->data <= end){
        printinRange(root->left , start , end);
        cout<<root->data<<" ";
        printinRange(root->right , start , end);
    }
    else if(root->data < start){
        printinRange(root->right , start , end);
    }
    else{
        printinRange(root->left , start ,end);
    }
}

int main(){
    int arr[] = {8,5,10,3,6,11,1,4,14};
    int n = 9;
    Node* root = BuildBST(arr , 9);
    Inorder(root);
    cout<<endl;

    printinRange(root , 5 ,12);
}