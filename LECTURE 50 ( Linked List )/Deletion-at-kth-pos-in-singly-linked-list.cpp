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
void insertAtHead(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}


// delete a node at start
void deleteAtHead(Node* &head){

    Node* temp = head;
    head = head->next;
    free(temp);
}

// delete a node at end
void deleteAtTail(Node* &head){

    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }

    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);

}


// delete a node at arbitary position
void deleteAtPosition(Node* &head , int pos){

    if(pos == 0){
        deleteAtHead(head);
        return;
    }

    int curr_pos = 0;
    Node* prev = head;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
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
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    Display(head);

    deleteAtHead(head);
    Display(head);

    deleteAtTail(head);
    Display(head);

    deleteAtPosition(head,1);
    Display(head);
}