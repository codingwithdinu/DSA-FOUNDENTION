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

void inorder(Node* root , vector<int> &arr){
    if(root == NULL) return;

    inorder(root->left , arr);
    arr.push_back(root->data);
    inorder(root->right , arr);
}

Node* buildBSTFromSorting(vector<int> arr , int st ,int end){
    if(st > end) return NULL;

    int mid = st + (end-st)/2;
    Node* root = new Node(arr[mid]);

    root->left = buildBSTFromSorting(arr , st , mid-1);
    root->right = buildBSTFromSorting(arr , mid+1 , end);
    return root;
}

Node* merge2BST(Node* root1 , Node* root2){
    vector<int> arr1 , arr2;
    inorder(root1 , arr1);
    inorder(root2 , arr2);

    vector<int> temp;
    int i=0 , j=0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        }else{
            temp.push_back(arr2[j++]);
        }
    }
    
    while(i<arr1.size()) temp.push_back(arr1[i++]);
    while(j<arr2.size()) temp.push_back(arr2[j++]);

    return buildBSTFromSorting(temp , 0 , temp.size()-1);
}

int main(){
    int arr1[] = {8,2,10,1};
    int arr2[] = {5,3,0};

    Node* root1 = BuildBST(arr1 , 4);
    Node* root2 = BuildBST(arr2 , 3);
    
    Node* root = merge2BST(root1 ,root2);

    vector<int> seq;
    inorder(root ,seq);
    for(int i : seq){
        cout<<i<<" ";
    }
}










#include <iostream>
using namespace std;

/* ---------- Node Definition ---------- */
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

/* ---------- Insert into BST ---------- */
Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

/* ---------- Build BST from Array ---------- */
Node* buildBST(int arr[], int n) {
    Node* root = NULL;
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);
    return root;
}

/* ---------- Inorder Traversal ---------- */
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

/* ---------- BST to Sorted DLL ---------- */
void bstToDLL(Node* root, Node*& head, Node*& prev) {
    if (!root) return;

    bstToDLL(root->left, head, prev);

    if (!prev)
        head = root;
    else {
        prev->right = root;
        root->left = prev;
    }
    prev = root;

    bstToDLL(root->right, head, prev);
}

/* ---------- Merge Two Sorted DLLs ---------- */
Node* mergeDLL(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node* head = NULL;
    Node* tail = NULL;

    while (head1 && head2) {
        Node* temp;
        if (head1->data < head2->data) {
            temp = head1;
            head1 = head1->right;
        } else {
            temp = head2;
            head2 = head2->right;
        }

        if (!head) {
            head = tail = temp;
            tail->left = NULL;
        } else {
            tail->right = temp;
            temp->left = tail;
            tail = temp;
        }
    }

    if (head1) {
        tail->right = head1;
        head1->left = tail;
    }
    if (head2) {
        tail->right = head2;
        head2->left = tail;
    }

    return head;
}

/* ---------- Count Nodes in DLL ---------- */
int countNodes(Node* head) {
    int cnt = 0;
    while (head) {
        cnt++;
        head = head->right;
    }
    return cnt;
}

/* ---------- Convert DLL to Balanced BST ---------- */
Node* DLLToBST(Node*& head, int n) {
    if (n <= 0) return NULL;

    Node* left = DLLToBST(head, n / 2);

    Node* root = head;
    root->left = left;

    head = head->right;

    root->right = DLLToBST(head, n - n / 2 - 1);
    return root;
}

/* ---------- Merge Two BSTs ---------- */
Node* mergeBST(Node* root1, Node* root2) {
    Node *head1 = NULL, *head2 = NULL;
    Node *prev1 = NULL, *prev2 = NULL;

    bstToDLL(root1, head1, prev1);
    bstToDLL(root2, head2, prev2);

    Node* mergedHead = mergeDLL(head1, head2);

    int totalNodes = countNodes(mergedHead);

    return DLLToBST(mergedHead, totalNodes);
}

/* ---------- MAIN ---------- */
int main() {
    int arr1[] = {8, 2, 10, 1};
    int arr2[] = {5, 3, 0};

    Node* root1 = buildBST(arr1, 4);
    Node* root2 = buildBST(arr2, 3);

    Node* mergedRoot = mergeBST(root1, root2);

    cout << "Inorder of merged balanced BST:\n";
    inorder(mergedRoot);

    return 0;
}
