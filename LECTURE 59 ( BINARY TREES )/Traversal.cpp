#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> preorderd){
    idx++;

    if(preorderd[idx] == -1) return NULL;

    Node* root = new Node(preorderd[idx]);
    root->left = buildTree(preorderd);
    root->right = buildTree(preorderd);

    return root;
}


// PreOrder Traversal
void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


// InOrder Traversal
void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// PostOrder Traversal
void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//level Order Travesal
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right !=  NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

// level print 
void levelPrin(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

    cout<<endl;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    cout<<endl;
    levelPrin(root);
}