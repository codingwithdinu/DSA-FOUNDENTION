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

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<endl;
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


    void deleteAtStart(){
        if(head==NULL) return;

        Node* temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
        }else{
            head->prev = NULL;
        }

        delete temp;
    }

    void deleteAtEnd(){
        if(tail==NULL) return;

        Node* temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }

        delete temp;
    }

    void deleteAtPosition(int k){
        if(head==NULL) return;

        Node* temp = head;
        int count = 1;
        while(count < k){
            temp = temp->next;
            count++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

};

int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.display();

    dll.deleteAtStart();
    dll.display();

    dll.deleteAtEnd();
    dll.display();

    dll.deleteAtPosition(3);
    dll.display();
}