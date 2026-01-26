// Stack container follows LIFO (Last In First Out) order of insertion and deletion. 
// It means that most recently inserted element is removed first and the first inserted element will be removed last.
//  This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.

// push() -> new elements can only be inserted at the top of the stack.
// pop()  -> only the top element of the stack can be deleted
// top()  -> Only the top element of the stack can be accessed
// empty() -> This checks whether the stack is empty. It returns true if the stack has no elements; otherwise, it returns false.
// size()  -> returns the number of elements currently in the stack.

// Linked List Implementation of Stacks
#include <iostream>
#include <climits>
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

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        capacity = c;
        currSize = 0;
        head = NULL;
    }

    void push(int data){
        if(currSize == capacity){
            cout<<"Overflow"<<endl;
            return;
        }

        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        currSize++;
    }

    int pop(){
        if(head == NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        Node* new_head = head->next;
        head->next = NULL;
        Node* tobeRemoved = head;
        int result = tobeRemoved->val;
        delete tobeRemoved;
        head = new_head;
        return result;
    }

    int getTop(){
        if(head == NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return head->val;
    }

    bool IsEmpty(){
        return head == NULL;
    }

    int size(){
        return currSize;
    }

    bool IsFULL(){
        return currSize == capacity;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    st.pop();
    cout<<st.getTop()<<endl;
    st.push(6);
    cout<<st.getTop()<<endl;
    st.push(7);
    cout<<st.getTop()<<endl;


}