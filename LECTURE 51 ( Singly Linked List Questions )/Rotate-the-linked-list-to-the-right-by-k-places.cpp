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

Node* RotateByK(Node* &head , int k){
    //find the length 
    // find the tail node
    int n = 0;
    Node* tail = head;

    while(tail->next){
        n++;
        tail = tail->next;
    }
    n++; //including last node

    k = k%n;
    if(k==0) return head;

    tail->next = head;

    // traverse n-k nodes
    Node* temp = head;
    for(int i=1; i<n-k; i++){
        temp = temp->next;
    }

    // temp pointing (n-k)th node
    Node* newNode = temp->next;
    temp->next = NULL;
    return newNode;
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

    ll1.head = RotateByK(ll1.head , 3);
    ll1.display();

}