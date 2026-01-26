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


    void deleteAtStart(){
        if(head == NULL) return;

        Node* temp = head;
        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        delete temp;
    }

    void deleteAtEnd(){
        if(head == NULL) return;

        Node* tail = head;
        while(tail->next->next!=head){
            tail = tail->next;
        }
        Node* temp = tail->next;
        tail->next = head;
        delete temp;

    }

    void deleteAtPosition(int k) {
        if (head == NULL || k <= 0) return;

        if (k == 1) {  // delete head
            deleteAtStart();
            return;
        }

        Node* prev = head;
        int count = 1;

        while (count < k-1 && prev->next != head) {
            prev = prev->next;
            count++;
        }

        if (prev->next == head) { 
            cout << "Position out of range" << endl;
            return;
        }

        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
    }



};

int main(){
    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.display();

    cll.deleteAtStart();
    cll.display();

    cll.deleteAtEnd();
    cll.display();

    cll.deleteAtPosition(3);
    cll.display();



}