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

class Queue{
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void dequeue(){
        if(head == NULL){
            cout<<"Queue is Empty";
            return;
        }
        else{
            Node* oldhead = head;
            Node* newhead = head->next;
            head = newhead;
            if(head == NULL) tail=NULL;
            oldhead->next = NULL;
            delete oldhead;
            size--;
        }
    }
    
    bool isEmpty(){
        return head == NULL;
    }

    int getsize(){
        return size;
    }

    int front(){
        if(head == NULL) return -1;
        return head->val;
    }

};

int main(){
    Queue qu;
    qu.enqueue(10);    
    qu.enqueue(20);    
    qu.enqueue(30); 
    qu.dequeue(); 
    qu.enqueue(40);    
    qu.enqueue(50);    
    while(!qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }
    return 0;
}

