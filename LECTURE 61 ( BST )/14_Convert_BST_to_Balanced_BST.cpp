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
        root->right = insert(root->right,val);
    }else{
        root->left = insert(root->left,val);
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
void inorder(Node* root , vector<int> &arr1){
    if(root == NULL) return;

    inorder(root->left , arr1);
    arr1.push_back(root->data);
    inorder(root->right,arr1);
}

Node* BuildBSTfromSorted(vector<int> &arr, int st , int end){
    if(st > end) return NULL;

    int mid = st + (end-st)/2;

    Node* root = new Node(arr[mid]);
    root->left = BuildBSTfromSorted(arr, st ,mid-1);
    root->right = BuildBSTfromSorted(arr,mid+1 ,end);
    return root;
}


int main(){
    int arr[] = {6,5,7,4,8,3,9};
    Node* root = buildBST(arr,7);

    vector<int> arr1;
    inorder(root,arr1);

    Node* root1 = BuildBSTfromSorted(arr1 , 0 , arr1.size()-1);

    
}