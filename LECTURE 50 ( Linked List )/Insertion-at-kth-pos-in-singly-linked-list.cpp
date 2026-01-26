#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

//Add node at the start
void insertAtHead(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

//Add node at the end
void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

//Add a node at arbitary position
void insertAtPosition(Node* &head , int val , int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

//Updation
void updateAtPosition(Node* &head , int k ,int val){
    Node* temp = head;
    int curr_pos = 0; 
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    temp->val = val;
}


void Display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtHead(head,2);
    Display(head);
    insertAtHead(head,1);
    Display(head);

    insertAtTail(head,3);
    Display(head);

    insertAtPosition(head,4,3);
    Display(head);

    updateAtPosition(head,2,5);
    Display(head);
}