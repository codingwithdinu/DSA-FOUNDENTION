// L0->L1->....->Ln-1->Ln
// reorder :
// L0->Ln-1->L1->Ln.......

#include <iostream>
#include <vector>
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

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);

        if(head==NULL){
            head=new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

Node* Reorder(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;
    while(curr){
        Node* nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }

    Node* ptr1 = head;
    Node* ptr2 = prev;
    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }

    return head;
}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();

    ll1.head = Reorder(ll1.head);
    ll1.display();

}