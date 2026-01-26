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

void printpath(vector<int> path){
    for(int i=0; i<path.size(); i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

void pathHelper(Node* root , vector<int> &path){
    if(root == NULL) return;

    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printpath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left , path);
    pathHelper(root->right , path);
    path.pop_back();
}


void rootTOLeafPath(Node* root){
    vector<int> path;
    pathHelper(root , path);
}


int main(){
    int arr[] = {8,5,10,3,6,11,1,4,14};
    int n = 9;
    Node* root = BuildBST(arr , n);
    rootTOLeafPath(root);
}