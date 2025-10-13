#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

void insertAtPosition(int val, int pos) {
    if (pos == 1) { 
        insertAtStart(val);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < (pos - 1)) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) { 
        cout << "Position out of range!" << endl;
        return;
    }

    
    if (temp->next == NULL) {
        insertAtEnd(val);
        return;
    }

    Node* new_node = new Node(val);
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
}



    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    DoublyLinkedList dll;
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.display();

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.display();

    dll.insertAtPosition(4,3);
    dll.display();
}