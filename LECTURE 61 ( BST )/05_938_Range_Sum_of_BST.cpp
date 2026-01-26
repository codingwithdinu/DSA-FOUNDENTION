#include <iostream>
#include <vector>
using namespace std;

// Given the root node of a binary search tree and two integers low and high, 
// return the sum of values of all nodes with a value in the inclusive range [low, high]

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

int RangeSumOfBST(Node* root , int low , int high){
    if(root == NULL) return 0;
    int temp = 0;

    if(low <= root->data && root->data <= high){
        temp = temp + root->data + RangeSumOfBST(root->left , low , high) + RangeSumOfBST(root->right , low , high);
    }
    else if(root->data < low){
        RangeSumOfBST(root->right , low , high);
    }
    else{
        RangeSumOfBST(root->left , low , high);
    }

    return temp;
}

int main(){
    int arr[] = {8,5,10,3,6,11,1,4,14};
    int n = 9;
    Node* root = BuildBST(arr , n);
    cout<<RangeSumOfBST(root , 5 , 12);
}