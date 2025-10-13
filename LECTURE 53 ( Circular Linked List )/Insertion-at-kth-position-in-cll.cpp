// A circular linked list is a data structure where the last node points back to the first node, forming a closed loop.

// Structure: All nodes are connected in a circle, enabling continuous traversal without encountering NULL.
// Difference from Regular Linked List: In a regular linked list, the last node points to NULL, 
// whereas in a circular linked list, it points to the first node.
// Uses: Ideal for tasks like scheduling and managing playlists, where smooth and repeated.


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

class CircularLinkedList{
    public:
    Node* head; 
    CircularLinkedList(){
        head = NULL;
    }

    void display(){
        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
    }

    void insertAtPosition(int val ,int k){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos!=k-1){
            temp = temp->next;
            curr_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

        
    }

};

int main(){
    CircularLinkedList cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.display();

    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.display();

    cll.insertAtPosition(6 , 2);
    cll.insertAtPosition(7 , 4);
    cll.display();


}